// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDRAWABLEQUEUEPAYLOAD_H
#define REDRAWABLEQUEUEPAYLOAD_H

@class NSArray;
@protocol OS_xpc_object;


#import "RESharedResourcePayload.h"

@interface REDrawableQueuePayload : RESharedResourcePayload

@property (readonly, nonatomic) unsigned int height; // ivar: _height
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly, nonatomic) NSObject<OS_xpc_object> *queueStateShmem; // ivar: _queueStateShmem
@property (readonly, nonatomic) NSArray *textureHandles; // ivar: _textureHandles
@property (readonly, nonatomic) unsigned int width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 pixelFormat:(NSUInteger)arg2 textureHandles:(id)arg3 queueStateShmem:(*void)arg4 queueStateLength:(NSUInteger)arg5 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif