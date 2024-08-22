// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLPOSTVERTEXDUMPOUTPUT_H
#define MTLPOSTVERTEXDUMPOUTPUT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLPostVertexDumpOutput : NSObject

@property (readonly) NSString *airMDType; // ivar: _airMDType
@property (readonly) NSUInteger aluType; // ivar: _aluType
@property (readonly) NSUInteger dataType; // ivar: _dataType
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSUInteger offset; // ivar: _offset
@property (readonly) NSUInteger pixelFormat; // ivar: _pixelFormat


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithAirMDType:(id)arg0 dataType:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 aluType:(NSUInteger)arg3 name:(id)arg4 offset:(NSUInteger)arg5 ;
-(void)dealloc;


@end


#endif