// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBGENERATELAUNCHSNAPSHOTSALERTITEM_H
#define SBGENERATELAUNCHSNAPSHOTSALERTITEM_H

@class SBAlertItem;



@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem

@property (copy, nonatomic) id *handler; // ivar: _handler


-(BOOL)behavesSuperModally;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithHandler:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)regenerateApplications:(id)arg0 ;


@end


#endif