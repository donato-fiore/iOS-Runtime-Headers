// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBUFFERERRORLOG_H
#define MTLBUFFERERRORLOG_H

@class MTLDebugInstrumentationData, MTLArgument, NSString, NSArray;
@protocol MTLFunctionLog, MTLBuffer, MTLFunctionLogDebugLocation, MTLFunction;

#import <Foundation/Foundation.h>


@interface MTLBufferErrorLog : NSObject <MTLFunctionLog>

 {
    MTLDebugInstrumentationData *_debugData;
}


@property (readonly, nonatomic) NSUInteger addressSpace; // ivar: _addressSpace
@property (readonly, nonatomic) MTLArgument *argument; // ivar: _argument
@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<MTLFunctionLogDebugLocation> *debugLocation; // ivar: _debugLocation
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *encoderLabel; // ivar: _encoderLabel
@property (nonatomic) NSUInteger encoderMethodIdentifier; // ivar: _encoderMethodIdentifier
@property (readonly, nonatomic) NSArray *errorStackTrace; // ivar: _errorStackTrace
@property (readonly, nonatomic) NSObject<MTLFunction> *function; // ivar: _function
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 function:(id)arg1 encoderLabel:(id)arg2 addressSpace:(NSUInteger)arg3 buffer:(id)arg4 offset:(NSUInteger)arg5 operation:(NSUInteger)arg6 stackTrace:(id)arg7 argument:(id)arg8 debugData:(id)arg9 ;
-(void)dealloc;


@end


#endif