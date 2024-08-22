// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNPETSDETECTOR_H
#define VCPCNNPETSDETECTOR_H


#import <Foundation/Foundation.h>


@interface VCPCNNPetsDetector : NSObject



+(id)detector:(int)arg0 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 withChannels:(int)arg2 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 ;
-(int)createModel:(int)arg0 srcWidth:(int)arg1 ;
-(int)generatePetsBoxes:(id)arg0 faceBoxes:(id)arg1 cancel:(id)arg2 ;
-(int)generatePetsRegions:(*float)arg0 outHeight:(int)arg1 outWidth:(int)arg2 boxes:(id)arg3 faceBoxes:(id)arg4 maxNumRegions:(int)arg5 ;
-(int)petsDetection:(struct __CVBuffer *)arg0 petsRegions:(id)arg1 petsFaceRegions:(id)arg2 cancel:(id)arg3 ;
-(int)postProcBoxes:(id)arg0 maxNumRegions:(int)arg1 ;
-(void)nonMaxSuppression:(id)arg0 ;


@end


#endif