// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERLOOPER_H
#define AVPLAYERLOOPER_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>

#import "AVPlayerLooperInternal.h"

@interface AVPlayerLooper : NSObject {
    AVPlayerLooperInternal *_looper;
}


@property (readonly) NSError *error;
@property (readonly) NSInteger loopCount;
@property (readonly, nonatomic) NSArray *loopingPlayerItems;
@property (readonly) NSInteger status;


+(id)playerLooperWithPlayer:(id)arg0 templateItem:(id)arg1 ;
+(id)playerLooperWithPlayer:(id)arg0 templateItem:(id)arg1 timeRange:(struct ? )arg2 ;
+(void)initialize;
-(BOOL)_isWaitingForLastCopyToFinishSet;
-(BOOL)_setupLoopingReturningError:(*id)arg0 ;
-(id)init;
-(id)initWithPlayer:(id)arg0 templateItem:(id)arg1 timeRange:(struct ? )arg2 ;
-(int)_calculateNumberOfCopiesNeeded;
-(void)_changeStatusToFailedWithError:(id)arg0 ;
-(void)_cleanupAfterPlayingLastLoopingCopy;
-(void)_configureLoopingItem:(id)arg0 ;
-(void)_turnOffLooping;
-(void)dealloc;
-(void)disableLooping;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif