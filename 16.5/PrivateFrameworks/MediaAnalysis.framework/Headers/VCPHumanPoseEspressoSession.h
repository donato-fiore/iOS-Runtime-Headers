// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPHUMANPOSEESPRESSOSESSION_H
#define VCPHUMANPOSEESPRESSOSESSION_H


#import <Foundation/Foundation.h>


@interface VCPHumanPoseEspressoSession : NSObject {
    ? _heatmapNms;
    int _width;
    int _height;
    int _revision;
    ? _modelOutput16bit;
    int _modelOutputSize;
    BOOL _loadModel;
    *void _plan;
    *void _ctx;
    ? _net;
    ? _outputBlob;
}




-(id)initWithOptions:(id)arg0 ;
-(id)keypointsToObservation:(id)arg0 ;
-(int)keypointsFromTensor:(*NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 channels:(id)arg3 withOptions:(id)arg4 results;
-(int)keypointsFromTensor:(struct ? *)arg0 withOptions:(id)arg1 results:(id)arg2 ;
-(int)processFrame:(struct __CVBuffer *)arg0 withOptions:(id)arg1 results:(id)arg2 ;
-(int)requiredInputFormat:(*int)arg0 height:(*int)arg1 format:(*unsigned int)arg2 ;
-(void)dealloc;


@end


#endif