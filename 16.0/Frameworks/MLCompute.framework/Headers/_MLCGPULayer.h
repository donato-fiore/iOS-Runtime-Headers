// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCGPULAYER_H
#define _MLCGPULAYER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _MLCGPULayer : NSObject

@property (retain, nonatomic) NSArray *deviceOps; // ivar: _deviceOps


+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 ;


@end


#endif