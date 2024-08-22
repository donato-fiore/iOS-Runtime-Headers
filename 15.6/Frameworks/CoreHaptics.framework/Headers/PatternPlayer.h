// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PATTERNPLAYER_H
#define PATTERNPLAYER_H

@class AVHapticPlayerChannel, NSString;
@protocol CHHapticPatternPlayer;


#import "PatternPlayerBase.h"

@interface PatternPlayer : PatternPlayerBase <CHHapticPatternPlayer>

 {
    AVHapticPlayerChannel *_channel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isMuted;
@property (readonly) Class superclass;


-(BOOL)cancelAndReturnError:(*id)arg0 ;
-(BOOL)scheduleParameterCurve:(id)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)sendParameters:(id)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)startAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)stopAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPlayable:(id)arg0 engine:(id)arg1 privileged:(BOOL)arg2 error:(*id)arg3 ;
-(void)clearExternalResources:(id)arg0 ;
-(void)dealloc;
-(void)doSetMute:(BOOL)arg0 ;


@end


#endif