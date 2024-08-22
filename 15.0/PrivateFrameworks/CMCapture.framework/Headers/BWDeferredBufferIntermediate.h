// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDBUFFERINTERMEDIATE_H
#define BWDEFERREDBUFFERINTERMEDIATE_H

@class NSDictionary, NSString;


#import "BWDeferredIntermediate.h"

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate

@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) *__CVBuffer buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger bufferType; // ivar: _bufferType
@property (readonly, nonatomic) int compressionProfile; // ivar: _compressionProfile
@property (readonly, nonatomic) NSString *metadataTag; // ivar: _metadataTag
@property (readonly, nonatomic) NSString *portType; // ivar: _portType


+(BOOL)supportsSecureCoding;
-(id)archive:(*int)arg0 ;
-(id)description;
-(id)fetchAndRetain:(*int)arg0 ;
-(id)initWithBuffer:(struct __CVBuffer *)arg0 tag:(id)arg1 bufferType:(NSUInteger)arg2 metadataTag:(id)arg3 portType:(id)arg4 compressionProfile:(int)arg5 URL:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(int)flush;
-(int)setURL:(id)arg0 prefetchQueue:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif