// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENEMERGENCYCALLVIEWCONTROLLER_H
#define SBLOCKSCREENEMERGENCYCALLVIEWCONTROLLER_H

@class SBUIEmergencyCallHostViewController;
@protocol SBLockScreenEmergencyCallViewControllerDelegate;



@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController

@property (weak, nonatomic) NSObject<SBLockScreenEmergencyCallViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(NSInteger)_wallpaperStyleFromUIBackgroundStyle:(NSInteger)arg0 ;
-(id)tintColorForBackgroundStyle:(NSInteger)arg0 outBlurRadius:(*CGFloat)arg1 ;
-(void)dismiss;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif