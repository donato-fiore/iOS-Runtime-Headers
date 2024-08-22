// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINTERNETPRIVACYLOCATIONSHARINGSPECIFIERPROVIDER_H
#define ICQINTERNETPRIVACYLOCATIONSHARINGSPECIFIERPROVIDER_H

@class AIDAAccountManager, NSString, PSSpecifier, NSArray;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQInternetPrivacyViewModel.h"

@interface ICQInternetPrivacyLocationSharingSpecifierProvider : NSObject <AAUISpecifierProvider>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *enableSpecifier; // ivar: _enableSpecifier
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL locationSharingEnabled; // ivar: _locationSharingEnabled
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_reloadSpecifiers;
-(void)_specifierWasTapped:(id)arg0 ;
-(void)_startFetchingSharingLocationPreference;


@end


#endif