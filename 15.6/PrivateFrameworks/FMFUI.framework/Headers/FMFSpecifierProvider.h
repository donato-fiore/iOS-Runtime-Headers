// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMFSPECIFIERPROVIDER_H
#define FMFSPECIFIERPROVIDER_H

@class AIDAAccountManager, NSString, NSArray;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)isAccountInGrayMode;
-(BOOL)locationServicesDisabledByRestrictions;
-(BOOL)shouldEnableLocationSharingSpecifier;
-(BOOL)shouldShowLocationSharingSpecifier;
-(id)initWithAccountManager:(id)arg0 ;
-(void)locationSharingSpecifierWasTapped:(id)arg0 ;


@end


#endif