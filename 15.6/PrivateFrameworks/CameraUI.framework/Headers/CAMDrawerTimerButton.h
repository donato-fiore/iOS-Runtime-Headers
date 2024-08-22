// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDRAWERTIMERBUTTON_H
#define CAMDRAWERTIMERBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton

@property (nonatomic) NSInteger timerDuration; // ivar: _timerDuration


-(BOOL)isMenuItemSelected:(id)arg0 ;
-(BOOL)shouldUseActiveTintForCurrentState;
-(NSInteger)controlType;
-(id)imageNameForCurrentState;
-(id)loadMenuItems;
-(void)didSelectMenuItem:(id)arg0 ;


@end


#endif