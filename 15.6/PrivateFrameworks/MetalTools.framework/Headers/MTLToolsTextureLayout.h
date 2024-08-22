// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSTEXTURELAYOUT_H
#define MTLTOOLSTEXTURELAYOUT_H

@class NSString;
@protocol MTLTextureLayout;


#import "MTLToolsObject.h"

@interface MTLToolsTextureLayout : MTLToolsObject <MTLTextureLayout>



@property (readonly) NSUInteger alignment;
@property (readonly) ? copyGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger size;
@property (readonly) Class superclass;
@property (readonly) ? watermark;


-(void)copyFromLinearBytes:(*void)arg0 linearOffset:(NSUInteger)arg1 linearBytesPerRow:(NSUInteger)arg2 linearBytesPerImage:(NSUInteger)arg3 toTextureMemory:(*void)arg4 textureSlice:(NSUInteger)arg5 textureLevel:(NSUInteger)arg6 textureRegion:(struct ? )arg7 ;
-(void)copyFromTextureMemory:(*void)arg0 textureSlice:(NSUInteger)arg1 textureLevel:(NSUInteger)arg2 textureRegion:(struct ? )arg3 toLinearBytes:(*void)arg4 linearOffset:(NSUInteger)arg5 linearBytesPerRow:(NSUInteger)arg6 linearBytesPerImage:(NSUInteger)arg7 ;
-(void)finalizeTextureMemory:(*void)arg0 ;
-(void)initializeTextureMemory:(*void)arg0 ;


@end


#endif