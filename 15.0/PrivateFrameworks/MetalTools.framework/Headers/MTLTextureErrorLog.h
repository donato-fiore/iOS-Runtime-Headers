// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTEXTUREERRORLOG_H
#define MTLTEXTUREERRORLOG_H

@class MTLDebugInstrumentationData, NSString, NSArray;
@protocol MTLFunctionLog, MTLFunctionLogDebugLocation, MTLFunction, MTLTexture;

#import <Foundation/Foundation.h>


@interface MTLTextureErrorLog : NSObject <MTLFunctionLog>

 {
    MTLDebugInstrumentationData *_debugData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<MTLFunctionLogDebugLocation> *debugLocation; // ivar: _debugLocation
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *encoderLabel; // ivar: _encoderLabel
@property (nonatomic) NSUInteger encoderMethodIdentifier; // ivar: _encoderMethodIdentifier
@property (readonly, nonatomic) NSArray *errorStackTrace; // ivar: _errorStackTrace
@property (readonly, nonatomic) NSObject<MTLFunction> *function; // ivar: _function
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 function:(id)arg1 encoderLabel:(id)arg2 texture:(id)arg3 stackTrace:(id)arg4 debugData:(id)arg5 ;
-(void)dealloc;


@end


#endif