// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNSMILEDETECTOR_H
#define VCPCNNSMILEDETECTOR_H


#import <Foundation/Foundation.h>


@interface VCPCNNSmileDetector : NSObject



+(id)detector;
-(*float)getInputBuffer;
-(int)computeSmileScore:(*float)arg0 ;
-(int)detectSmileForFace:(struct CGRect )arg0 inBuffer:(struct __CVBuffer *)arg1 smile:(*BOOL)arg2 ;


@end


#endif