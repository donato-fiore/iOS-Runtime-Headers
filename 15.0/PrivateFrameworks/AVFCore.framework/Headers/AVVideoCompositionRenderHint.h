// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVIDEOCOMPOSITIONRENDERHINT_H
#define AVVIDEOCOMPOSITIONRENDERHINT_H


#import <Foundation/Foundation.h>

#import "AVVideoCompositionRenderHintInternal.h"

@interface AVVideoCompositionRenderHint : NSObject {
    AVVideoCompositionRenderHintInternal *_internal;
}


@property (readonly, nonatomic) ? endCompositionTime;
@property (readonly, nonatomic) ? startCompositionTime;


-(id)initWithStartCompositionTime:(struct ? )arg0 endCompositionTime:(struct ? )arg1 subsequentStartCompositionTime:(struct ? )arg2 subsequentEndCompositionTime:(struct ? )arg3 ;
-(struct ? )subsequentEndCompositionTime;
-(struct ? )subsequentStartCompositionTime;
-(void)dealloc;


@end


#endif