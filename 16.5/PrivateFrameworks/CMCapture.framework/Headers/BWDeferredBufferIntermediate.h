// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEFERREDBUFFERINTERMEDIATE_H
#define BWDEFERREDBUFFERINTERMEDIATE_H

@class NSDictionary, NSString;


#import "BWDeferredIntermediate.h"

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate

@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) *__CVBuffer buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger bufferType; // ivar: _bufferType
@property (readonly, nonatomic) NSUInteger captureFrameFlags; // ivar: _captureFrameFlags
@property (readonly, nonatomic) int compressionProfile; // ivar: _compressionProfile
@property (readonly, nonatomic) NSString *metadataTag; // ivar: _metadataTag
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (readonly, nonatomic) NSString *rawThumbnailsBufferTag; // ivar: _rawThumbnailsBufferTag
@property (readonly, nonatomic) NSString *rawThumbnailsMetadataTag; // ivar: _rawThumbnailsMetadataTag


+(BOOL)supportsSecureCoding;
-(id)_shortString;
-(id)archive:(*int)arg0 ;
-(id)description;
-(id)fetchAndRetain:(*int)arg0 ;
-(id)initWithBuffer:(struct __CVBuffer *)arg0 tag:(id)arg1 bufferType:(NSUInteger)arg2 captureFrameFlags:(NSUInteger)arg3 metadataTag:(id)arg4 rawThumbnailsBufferTag:(id)arg5 rawThumbnailsMetadataTag:(id)arg6 portType:(id)arg7 compressionProfile:(int)arg8 URL:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(int)flush;
-(int)setURL:(id)arg0 prefetchQueue:(id)arg1 ;
-(unsigned int)pixelFormat;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)releaseBuffer;


@end


#endif