// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGRENDERTARGETATTACHMENTINFO_H
#define MTLDEBUGRENDERTARGETATTACHMENTINFO_H

@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface MTLDebugRenderTargetAttachmentInfo : NSObject

@property (readonly, nonatomic) NSObject<MTLTexture> *attachmentTexture; // ivar: _attachmentTexture
@property (readonly, nonatomic) NSUInteger baseLevelOffset; // ivar: _baseLevelOffset
@property (readonly, nonatomic) NSObject<MTLTexture> *baseResolveTexture; // ivar: _baseResolveTexture
@property (readonly, nonatomic) _NSRange baseSliceRangeOffset; // ivar: _baseSliceRangeOffset
@property (readonly, nonatomic) NSObject<MTLTexture> *baseTexture; // ivar: _baseTexture
@property (readonly, nonatomic) NSUInteger renderTargetArrayLength; // ivar: _renderTargetArrayLength
@property (readonly, nonatomic) NSUInteger resolveLevelOffset; // ivar: _resolveLevelOffset
@property (readonly, nonatomic) _NSRange resolveSliceRangeOffset; // ivar: _resolveSliceRangeOffset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)intersectsTexture:(id)arg0 ;
-(id)initWithDesc:(struct MTLRenderPassAttachmentDescriptorPrivate *)arg0 renderTargetArrayLength:(NSUInteger)arg1 ;


@end


#endif