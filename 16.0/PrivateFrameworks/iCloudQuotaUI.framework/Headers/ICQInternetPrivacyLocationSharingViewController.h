// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINTERNETPRIVACYLOCATIONSHARINGVIEWCONTROLLER_H
#define ICQINTERNETPRIVACYLOCATIONSHARINGVIEWCONTROLLER_H

@class PSListController, NSString;
@protocol AAUISpecifierProviderDelegate;


#import "ICQInternetPrivacyLocationSharingSpecifierProvider.h"
#import "ICQInternetPrivacyViewModel.h"

@interface ICQInternetPrivacyLocationSharingViewController : PSListController <AAUISpecifierProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICQInternetPrivacyLocationSharingSpecifierProvider *specifierProvider; // ivar: _specifierProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)specifiers;
-(void)_setupNavigationBar;
-(void)reloadSpecifiersForProvider:(id)arg0 oldSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg0 didFinishLoadingSpecifier:(id)arg1 ;
-(void)specifierProvider:(id)arg0 showViewController:(id)arg1 ;
-(void)specifierProvider:(id)arg0 willBeginLoadingSpecifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif