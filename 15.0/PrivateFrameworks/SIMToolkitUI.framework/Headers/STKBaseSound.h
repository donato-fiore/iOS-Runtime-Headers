// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKBASESOUND_H
#define STKBASESOUND_H

@class BSTimer, NSString;
@protocol STKSound;

#import <Foundation/Foundation.h>


@interface STKBaseSound : NSObject <STKSound>

 {
    BSTimer *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (readonly, nonatomic) BOOL playsOnce; // ivar: _playsOnce
@property (readonly) Class superclass;


-(id)initWithDuration:(CGFloat)arg0 ;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
-(void)_sync_playSound;
-(void)_sync_stopSound;
-(void)dealloc;
-(void)playSound;
-(void)stopSound;


@end


#endif