// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTDISPARITYPOSTPROCESSINGDESCRIPTOR_H
#define PTDISPARITYPOSTPROCESSINGDESCRIPTOR_H

@class NSString;
@protocol MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface PTDisparityPostProcessingDescriptor : NSObject

@property (readonly) NSUInteger colorPixelFormat; // ivar: _colorPixelFormat
@property (readonly) ? colorSize; // ivar: _colorSize
@property (readonly, retain) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly) NSUInteger disparityPixelFormat; // ivar: _disparityPixelFormat
@property (readonly) ? disparitySize; // ivar: _disparitySize
@property (readonly) ? filteredDisparitySize; // ivar: _filteredDisparitySize
@property (readonly) NSString *sensorPort; // ivar: _sensorPort


-(id)initWithCommandQueue:(id)arg0 disparitySize:(struct ? )arg1 filteredDisparitySize:(struct ? )arg2 disparityPixelFormat:(NSUInteger)arg3 colorSize:(struct ? )arg4 colorPixelFormat:(NSUInteger)arg5 sensorPort:(id)arg6 ;


@end


#endif