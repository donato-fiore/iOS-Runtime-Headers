// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FASHAREDSUBSCRIPTIONSPECIFIERPROVIDER_H
#define FASHAREDSUBSCRIPTIONSPECIFIERPROVIDER_H

@class PSListController, PSSpecifier, ACAccount, NSOperationQueue, NSDictionary, NSArray;
@protocol FASharedSubscriptionSpecifierProviderDelegeate;

#import <Foundation/Foundation.h>

#import "FASharedServicesResponse.h"

@interface FASharedSubscriptionSpecifierProvider : NSObject {
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    BOOL _updateSubsriptionSpecifiers;
    BOOL _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSDictionary *_cachedResourceDictionary;
    NSUInteger _specifierState;
}


@property (weak, nonatomic) NSObject<FASharedSubscriptionSpecifierProviderDelegeate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers


-(BOOL)_launchWithResourceDictionary:(id)arg0 ;
-(BOOL)handleURL:(id)arg0 ;
-(id)_iconURLStringForService:(id)arg0 ;
-(id)_serviceSpecifiersFromArray:(id)arg0 ;
-(id)_sharedSubscriptionGroupSpecifier;
-(id)_specifierNamed:(id)arg0 ;
-(id)_valueForServiceSpecifier:(id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 presenter:(id)arg1 ;
-(void)_delayedLoadIfNeeded;
-(void)_handleSubscriptionListResponse:(id)arg0 ;
-(void)_loadSubscriptionServices;
-(void)_serviceSpecifierWasTapped:(id)arg0 ;
-(void)reloadSpecifiers;


@end


#endif