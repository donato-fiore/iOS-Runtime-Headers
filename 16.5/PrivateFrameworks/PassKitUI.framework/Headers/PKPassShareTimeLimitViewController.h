// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARETIMELIMITVIEWCONTROLLER_H
#define PKPASSSHARETIMELIMITVIEWCONTROLLER_H

@class PKPassEntitlementsComposer, PKPassEntitlementsComposerEntry;
@protocol PKPassShareScheduleSectionControllerDelegate, PKPassShareToggleSectionControllerDelegate, PKPassShareTimeLimitViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPassShareScheduleSectionController.h"
#import "PKPassShareToggleSectionController.h"

@interface PKPassShareTimeLimitViewController : PKPaymentSetupOptionsViewController <PKPassShareScheduleSectionControllerDelegate, PKPassShareToggleSectionControllerDelegate>

 {
    PKPassShareScheduleSectionController *_scheduleSectionController;
    PKPassShareToggleSectionController *_advancedScheduleSectionController;
    PKPassShareToggleSectionController *_entitlementAccessSectionController;
    NSUInteger _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    PKPassEntitlementsComposerEntry *_entitlementEntry;
    id<PKPassShareTimeLimitViewControllerDelegate> *_delegate;
}




-(id)initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 entitlementEntry:(id)arg2 delegate:(id)arg3 ;
-(void)_configureSections;
-(void)_showTimeLimitEditForStartDate:(BOOL)arg0 expirationDate:(BOOL)arg1 ;
-(void)didSelectEditEndDate;
-(void)didSelectEditStartDate;
-(void)timeConfigurationDidChange:(id)arg0 ;
-(void)toggle:(id)arg0 valueDidChange:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif