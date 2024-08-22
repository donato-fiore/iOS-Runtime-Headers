// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIPEOPLESEGMENTATION_H
#define SIPEOPLESEGMENTATION_H



#import "SIModel.h"

@interface SIPeopleSegmentation : SIModel {
    NSInteger _configuration;
    *__CVBuffer _temporalBuffer;
    int _frameCount;
}


@property (nonatomic) unsigned char snapEveryFrameCount; // ivar: snapEveryFrameCount


+(struct CGSize )getInputResolution;
+(struct CGSize )getOutputResolution;
-(BOOL)switchNetworkConfiguration:(NSInteger)arg0 ;
-(NSInteger)evaluateSemanticsForImage:(struct __CVBuffer *)arg0 andOutputSurface:(struct __IOSurface *)arg1 ;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(void)_initTemporalBuffer;
-(void)copyResultsToOtherBuffers:(struct __IOSurface *)arg0 ;
-(void)dealloc;


@end


#endif