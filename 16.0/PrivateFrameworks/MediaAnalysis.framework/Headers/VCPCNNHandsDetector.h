// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNHANDSDETECTOR_H
#define VCPCNNHANDSDETECTOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPCNNHandsDetector : NSObject {
    int _cnnInputWidth;
    int _cnnInputHeight;
    int _maxNumRegions;
    int _numClass;
    int _revision;
    *float _inputData;
    NSArray *_outputNames;
    VCPCNNModelEspresso *_modelEspresso;
}




+(id)detector:(int)arg0 forceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 inputConfig:(id)arg3 revision:(int)arg4 ;
-(id)initWithMaxNumRegions:(int)arg0 forceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 inputConfig:(id)arg3 revision:(int)arg4 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 ;
-(int)createModelWithResConfig:(id)arg0 ;
-(int)drawLine:(char *)arg0 width:(int)arg1 height:(int)arg2 stride:(int)arg3 point0:(struct CGPoint )arg4 point1:(struct CGPoint )arg5 drawPoint:(int)arg6 ;
-(int)drawRectangle:(char *)arg0 width:(int)arg1 height:(int)arg2 stride:(int)arg3 keypoints:(struct CGPoint *)arg4 ;
-(int)generateHandsBoxes:(id)arg0 ;
-(int)generateHandsRegions:(*void)arg0 boxes:(id)arg1 maxNumRegions:(int)arg2 ;
-(int)handsDetection:(struct __CVBuffer *)arg0 handsRegions:(id)arg1 cancel:(id)arg2 ;
-(int)retrieveBoxes:(*float)arg0 outHeight:(int)arg1 outWidth:(int)arg2 boxes:(id)arg3 anchorBox:(float)arg4 ;
-(int)updateModelWithResConfig:(id)arg0 ;
-(void)dealloc;
-(void)nonMaxSuppression:(id)arg0 ;


@end


#endif