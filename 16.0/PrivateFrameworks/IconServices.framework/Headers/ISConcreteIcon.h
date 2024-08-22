// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISCONCRETEICON_H
#define ISCONCRETEICON_H

@class NSUUID;
@protocol NSSecureCoding;


#import "ISIcon.h"
#import "ISImageCache.h"

@interface ISConcreteIcon : ISIcon <NSSecureCoding>



@property (readonly) NSUUID *digest; // ivar: _digest
@property (readonly) ISImageCache *imageCache; // ivar: _imageCache


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIcon:(id)arg0 ;
-(CGFloat)_aspectRatio;
-(NSUInteger)assessValidationToken:(id)arg0 ;
-(NSUInteger)hash;
-(id)_cachedImageForDescriptor:(id)arg0 ;
-(id)_fallbackKey;
-(id)_imageForSymbolImageDescriptor:(id)arg0 ;
-(id)_imageFromStoreForDescriptor:(id)arg0 ;
-(id)_placeholderImageWithImageDescriptor:(id)arg0 markAsPlaceholder:(BOOL)arg1 ;
-(id)generateImageWithDescriptor:(id)arg0 ;
-(id)imageForDescriptor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDigest:(id)arg0 ;
-(id)makeResourceProvider;
-(id)makeSymbolResourceProvider;
-(id)symbol;
-(void)_prepareImagesForImageDescriptors:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateImageWithDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)resolve;


@end


#endif