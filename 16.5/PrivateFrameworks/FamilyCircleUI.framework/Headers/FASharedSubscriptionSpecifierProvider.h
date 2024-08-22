// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASHAREDSUBSCRIPTIONSPECIFIERPROVIDER_H
#define FASHAREDSUBSCRIPTIONSPECIFIERPROVIDER_H

@class PSListController, PSSpecifier, ACAccount, NSHashTable, NSOperationQueue, NSDictionary, NSString, NSArray;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate, FASharedSubscriptionSpecifierProviderSelectionHandler;

#import <Foundation/Foundation.h>

#import "FASharedServicesResponse.h"

@interface FASharedSubscriptionSpecifierProvider : NSObject <AAUISpecifierProvider>

 {
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    NSHashTable *_subscribers;
    BOOL _updateSubsriptionSpecifiers;
    BOOL _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSDictionary *_cachedResourceDictionary;
    NSUInteger _specifierState;
    int _numberOfGroups;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<FASharedSubscriptionSpecifierProviderSelectionHandler> *selectionHandler; // ivar: _selectionHandler
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (copy, nonatomic) NSArray *subscriptionSpecifiers; // ivar: _subscriptionSpecifiers
@property (copy, nonatomic) NSArray *subscriptionsFamilyViewSpecifier; // ivar: _subscriptionsFamilyViewSpecifier
@property (readonly) Class superclass;


-(BOOL)_launchWithResourceDictionary:(id)arg0 ;
-(BOOL)handleURL:(id)arg0 ;
-(id)_iconURLStringForService:(id)arg0 ;
-(id)_serviceSpecifiersFromArray:(id)arg0 ;
-(id)_sharedSubscriptionGroupSpecifier;
-(id)_sharedSubscriptionSpecifierCell:(int)arg0 ;
-(id)_specifierNamed:(id)arg0 ;
-(id)_valueForServiceSpecifier:(id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 presenter:(id)arg1 ;
-(void)_addSharedSubscriptionsButtonWasTapped:(id)arg0 ;
-(void)_delayedLoadIfNeeded;
-(void)_handleSubscriptionListResponse:(id)arg0 ;
-(void)_loadSubscriptionServices;
-(void)_serviceSpecifierWasTapped:(id)arg0 ;
-(void)addSubscriber:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)removeSubscriber:(id)arg0 ;


@end


#endif