// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARNORMALTECHNIQUE_H
#define ARNORMALTECHNIQUE_H



#import "ARTechnique.h"

@interface ARNormalTechnique : ARTechnique {
    *__CVPixelBufferPool _normalPixelBufferPool;
    *CV3DNormalEstimationSession _session;
}




-(id)init;
-(id)processData:(id)arg0 ;
-(void)dealloc;


@end


#endif