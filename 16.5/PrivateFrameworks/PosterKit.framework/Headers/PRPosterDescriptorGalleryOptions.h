// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERDESCRIPTORGALLERYOPTIONS_H
#define PRPOSTERDESCRIPTORGALLERYOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PRPosterDescriptorGalleryAssetLookupInfo.h"

@interface PRPosterDescriptorGalleryOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) PRPosterDescriptorGalleryAssetLookupInfo *galleryAssetLookupInfo; // ivar: _galleryAssetLookupInfo
@property (readonly, nonatomic) NSUInteger presentationStyle; // ivar: _presentationStyle


+(BOOL)supportsSecureCoding;
+(id)galleryOptionsFromDictionaryRepresentation:(id)arg0 ;
+(id)galleryOptionsWithAssetLookupInfo:(id)arg0 ;
+(id)galleryOptionsWithAssetLookupInfo:(id)arg0 galleryPresentationStyle:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAssetLookupInfo:(id)arg0 galleryPresentationStyle:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif