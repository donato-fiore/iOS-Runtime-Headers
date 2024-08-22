// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCCPULAYER_H
#define _MLCCPULAYER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MLCDeviceCPU.h"

@interface _MLCCPULayer : NSObject

@property (readonly, nonatomic) MLCDeviceCPU *device; // ivar: _device
@property (retain, nonatomic) NSArray *deviceOps; // ivar: _deviceOps
@property (nonatomic) **void filter; // ivar: _filter
@property (nonatomic) **void secondaryFilter; // ivar: _secondaryFilter


+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 ;
-(id)initWithDevice:(id)arg0 deviceOps:(id)arg1 ;
-(void)dealloc;


@end


#endif