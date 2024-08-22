// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOWARRANTYINFOCONTROLLER_H
#define NDOWARRANTYINFOCONTROLLER_H

@class PSListController, NSDictionary, NSString, PSSpecifier;
@protocol NDOAppleCareFlowDelegate;


#import "NDOACController.h"

@interface NDOWarrantyInfoController : PSListController <NDOAppleCareFlowDelegate>



@property (weak, nonatomic) NDOACController *acController; // ivar: _acController
@property (retain) NSDictionary *appSupportDictionary; // ivar: _appSupportDictionary
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *deeplinkParams; // ivar: _deeplinkParams
@property (readonly, copy) NSString *description;
@property BOOL hasLoaded; // ivar: _hasLoaded
@property (readonly) NSUInteger hash;
@property (retain) PSSpecifier *lastCoverageSpecifier; // ivar: _lastCoverageSpecifier
@property (retain) PSSpecifier *lastDetailSpecifier; // ivar: _lastDetailSpecifier
@property NSUInteger previousAppSupportAvailablabilityType; // ivar: _previousAppSupportAvailablabilityType
@property BOOL reloadInProgress; // ivar: _reloadInProgress
@property BOOL shouldRefreshOnAppear; // ivar: _shouldRefreshOnAppear
@property (readonly) Class superclass;


-(BOOL)_isValidSubscriptionPlan;
-(BOOL)isWarrantyValid;
-(id)coverageItemSubTitle:(id)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(id)specifierForID:(id)arg0 inSpecifiers:(id)arg1 ;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)_addKey:(id)arg0 isCopyable:(BOOL)arg1 toSpecifiers:(id)arg2 ;
-(void)_addKey:(id)arg0 value:(id)arg1 isCopyable:(BOOL)arg2 toSpecifiers:(id)arg3 ;
-(void)_refresh:(id)arg0 ;
-(void)_refreshWithForcedNetworkPolicy:(BOOL)arg0 forceUpdateFollowup:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_setValue:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setValue:(id)arg0 forSpecifierWithKey:(id)arg1 inSpecifiers:(id)arg2 ;
-(void)benefitsDescLinkTapped:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)footer1Tapped:(id)arg0 ;
-(void)footer2Tapped:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadView;
-(void)managePlanPressed:(id)arg0 ;
-(void)ndoAppleCareCoveragePressed:(id)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)outreachFinishedForDeviceWithSerialNumber:(id)arg0 withCompletion:(NSUInteger)arg1 ;
-(void)postCAEventWithDeviceInfo:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)updateAppStoreLookupWithSpecifiers:(id)arg0 ;
-(void)updateAppSupportSpecifiersWithSpecifiers:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif