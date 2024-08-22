// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPIMAGEHUMANPOSEANALYZER_H
#define VCPIMAGEHUMANPOSEANALYZER_H

@class NSURL, NSString, NSMutableArray;


#import "VCPImageAnalyzer.h"
#import "VCPCNNModelEspresso.h"

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    *float _inputData;
    NSString *_resConfig;
    NSMutableArray *_persons;
    NSMutableArray *_results;
    BOOL _saveKeypoints;
    int _inputWidth;
    int _inputHeight;
    *float _heatmapNms;
    BOOL _forceCPU;
    BOOL _sharedModel;
    BOOL _flushModel;
}


@property BOOL trackingMode; // ivar: _trackingMode


+(BOOL)saveKeypoints;
+(id)sharedModel:(id)arg0 ;
-(id)init;
-(id)initWithKeypointsOption:(BOOL)arg0 aspectRatio:(id)arg1 lightweight:(BOOL)arg2 forceCPU:(BOOL)arg3 sharedModel:(BOOL)arg4 flushModel:(BOOL)arg5 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)configForAspectRatio:(id)arg0 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 withChannels:(int)arg2 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 modelInputHeight:(int)arg2 modelInputWidth:(int)arg3 ;
-(int)createModelWithHeight:(int)arg0 srcWidth:(int)arg1 ;
-(int)generateHumanPose:(struct __CVBuffer *)arg0 ;
-(int)parsePersons:(float)arg0 width:(int)arg1 height:(int)arg2 ;
-(int)preferredInputFormat:(*int)arg0 height:(*int)arg1 format:(*unsigned int)arg2 ;
-(int)processPersons:(float)arg0 width:(int)arg1 height:(int)arg2 ;
-(int)reInitModel;
-(int)updateModelForAspectRatio:(id)arg0 ;
-(void)dealloc;


@end


#endif