// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTKTEXTUREIOBUFFER_H
#define MTKTEXTUREIOBUFFER_H

@class NSString;
@protocol TXRBuffer, MTLBuffer;

#import <Foundation/Foundation.h>


@interface MTKTextureIOBuffer : NSObject <TXRBuffer>



@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 deallocNotification:(id)arg2 device:(unk)arg3 error:(id)arg4  ;
-(id)initWithLength:(NSUInteger)arg0 device:(id)arg1 ;
-(id)map;


@end


#endif