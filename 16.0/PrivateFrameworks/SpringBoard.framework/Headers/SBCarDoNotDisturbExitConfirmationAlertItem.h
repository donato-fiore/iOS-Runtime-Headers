// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCARDONOTDISTURBEXITCONFIRMATIONALERTITEM_H
#define SBCARDONOTDISTURBEXITCONFIRMATIONALERTITEM_H

@class SBAlertItem, NSString;
@protocol SiriUICarDNDDelegate;



@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem <SiriUICarDNDDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *notDrivingActionHandler; // ivar: _notDrivingActionHandler
@property (nonatomic) BOOL showSiriHeaderViewController; // ivar: _showSiriHeaderViewController
@property (readonly) Class superclass;


-(BOOL)forcesModalAlertAppearance;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)controllerDidProvideContext:(id)arg0 ;


@end


#endif