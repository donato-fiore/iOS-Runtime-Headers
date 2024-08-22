// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGGPULOG_H
#define MTLGPUDEBUGGPULOG_H

@class NSString, NSArray;
@protocol MTLFunctionLog, MTLFunctionLogDebugLocation, MTLFunction;

#import <Foundation/Foundation.h>

#import "MTLGPUDebugImageData.h"

@interface MTLGPUDebugGPULog : NSObject <MTLFunctionLog>



@property (nonatomic) NSUInteger callIndex; // ivar: _callIndex
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MTLFunctionLogDebugLocation> *debugLocation; // ivar: _debugLocation
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *encoderLabel; // ivar: _encoderLabel
@property (retain, nonatomic) NSArray *errorStackTrace; // ivar: _errorStackTrace
@property (retain, nonatomic) NSObject<MTLFunction> *function; // ivar: _function
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTLGPUDebugImageData *image; // ivar: _image
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


-(void)dealloc;


@end


#endif