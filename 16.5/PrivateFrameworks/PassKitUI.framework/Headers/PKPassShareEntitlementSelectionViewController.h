// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREENTITLEMENTSELECTIONVIEWCONTROLLER_H
#define PKPASSSHAREENTITLEMENTSELECTIONVIEWCONTROLLER_H

@class PKPassEntitlementsComposer, NSString;
@protocol PKPassEntitlementSelectionSectionControllerDelegate, PKPassEntitlementTimeSectionControllerDelegate, PKPassShareTimeLimitViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPassEntitlementSelectionSectionController.h"
#import "PKPassEntitlementTimeSectionController.h"

@interface PKPassShareEntitlementSelectionViewController : PKPaymentSetupOptionsViewController <PKPassEntitlementSelectionSectionControllerDelegate, PKPassEntitlementTimeSectionControllerDelegate, PKPassShareTimeLimitViewControllerDelegate>

 {
    NSUInteger _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    PKPassEntitlementSelectionSectionController *_entitlementSectionController;
    PKPassEntitlementTimeSectionController *_timeSectionController;
    BOOL _isShowingMyEntitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showDoneButton; // ivar: _showDoneButton
@property (readonly) Class superclass;


-(id)_initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 maxEntitlementSelectionCount:(NSUInteger)arg2 isShowingMyEntitlements:(BOOL)arg3 ;
-(id)initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 maxEntitlementSelectionCount:(NSUInteger)arg2 ;
-(id)initWithMyEntitlements:(id)arg0 ;
-(void)_dismissButtonPressed;
-(void)_reloadSections:(BOOL)arg0 ;
-(void)didTapPassEntitlementTimeSectionController:(id)arg0 ;
-(void)entitlementSelectionDidChange;
-(void)loadView;
-(void)showAdvancedScheduleSelectionFlowForEntitlementEntry:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif