// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUSICAPPBEHAVIOR_H
#define AVMUSICAPPBEHAVIOR_H

@class NSString;
@protocol AVBehaviorInternal, AVBehavior;

#import <Foundation/Foundation.h>

#import "AVMusicAppBehaviorContext.h"

@interface AVMusicAppBehavior : NSObject <AVBehaviorInternal, AVBehavior>



@property (weak, nonatomic) AVMusicAppBehaviorContext *behaviorContext; // ivar: _behaviorContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)contextWillHandleUserAction:(NSInteger)arg0 ;
-(void)didMoveToContext:(id)arg0 ;
-(void)didRemoveFromContext:(id)arg0 ;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg0 ;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(void)willMoveToContext:(id)arg0 ;
-(void)willRemoveFromContext:(id)arg0 ;


@end


#endif