// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINTERNETPRIVACYVIEWCONTROLLER_H
#define ICQINTERNETPRIVACYVIEWCONTROLLER_H

@class PSListController, NSString;
@protocol AAUISpecifierProviderDelegate, ICQInternetPrivacyDetailDelegate, ICQInternetPrivacyDelegate;


#import "ICQInternetPrivacyDetailSpecifierProvider.h"
#import "ICQInternetPrivacyViewModel.h"

@interface ICQInternetPrivacyViewController : PSListController <AAUISpecifierProviderDelegate, ICQInternetPrivacyDetailDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICQInternetPrivacyDetailSpecifierProvider *detailSpecifierProvider; // ivar: _detailSpecifierProvider
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ICQInternetPrivacyDelegate> *specifierDelegate; // ivar: _specifierDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


-(BOOL)isEnabled;
-(id)initWithViewModel:(id)arg0 accountManager:(id)arg1 ;
-(id)specifiers;
-(void)_setupNavigationBar;
-(void)insertSpecifier:(id)arg0 afterSpecifierNamed:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentIncompatibleSitesHelp;
-(void)presentLearnMoreFrom:(id)arg0 ;
-(void)presentSystemStatus;
-(void)reloadSpecifiersForProvider:(id)arg0 oldSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)showAlert:(id)arg0 ;
-(void)specifierProvider:(id)arg0 didFinishLoadingSpecifier:(id)arg1 ;
-(void)specifierProvider:(id)arg0 showViewController:(id)arg1 ;
-(void)specifierProvider:(id)arg0 willBeginLoadingSpecifier:(id)arg1 ;
-(void)statusDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif