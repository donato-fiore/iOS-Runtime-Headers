// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYNTHESISGRIDNET_H
#define SYNTHESISGRIDNET_H



#import "EspressoModel.h"

@interface SynthesisGridNet : EspressoModel {
    ? _bufferPools;
    ? _intermediateBuffer;
}




-(BOOL)synthesizeFrameFromFeatureForward:(struct ? *)arg0 backward:(struct ? *)arg1 destination:(struct __CVBuffer *)arg2 pyramidStartLevel:(NSUInteger)arg3 callback:(id)arg4 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif