// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSLOWMOTIONUTILITIES_H
#define NUSLOWMOTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface NUSlowMotionUtilities : NSObject



+(id)slowMotionAudioMixFromAsset:(id)arg0 rate:(float)arg1 range:(struct ? )arg2 error:(*id)arg3 ;
+(id)slowMotionVideoFromAsset:(id)arg0 rate:(float)arg1 range:(struct ? )arg2 error:(*id)arg3 ;
+(id)timeMapperForAssetDuration:(CGFloat)arg0 rate:(float)arg1 range:(struct ? )arg2 error:(*id)arg3 ;


@end


#endif