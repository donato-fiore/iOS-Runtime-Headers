// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAYERVIEWCONTROLLERBEHAVIOR_H
#define PLAYERVIEWCONTROLLERBEHAVIOR_H

@class AVMusicAppBehavior;



@interface PlayerViewControllerBehavior : AVMusicAppBehavior {
    ? delegate;
    ? onGoingJumpToTimeInfo;
    ? reporter;
}




-(id)init;
-(void)contextWillHandleUserAction:(NSInteger)arg0 ;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(void)willMoveToContext:(id)arg0 ;


@end


#endif