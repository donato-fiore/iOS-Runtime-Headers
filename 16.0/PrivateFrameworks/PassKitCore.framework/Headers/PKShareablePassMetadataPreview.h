// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREABLEPASSMETADATAPREVIEW_H
#define PKSHAREABLEPASSMETADATAPREVIEW_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKImage.h"

@interface PKShareablePassMetadataPreview : NSObject <NSSecureCoding, NSCopying>

 {
    PKImage *_pkPassThumbnailImage;
}


@property (retain, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) NSString *ownerDisplayName; // ivar: _ownerDisplayName
@property (nonatomic) *CGImage passThumbnailImage;
@property (retain, nonatomic) NSString *provisioningTemplateIdentifier; // ivar: _provisioningTemplateIdentifier
@property (retain, nonatomic) NSURL *thumbnailURL; // ivar: _thumbnailURL


+(BOOL)supportsSecureCoding;
+(id)new;
+(id)previewWithPassThumbnail:(struct CGImage *)arg0 localizedDescription:(id)arg1 ;
+(id)previewWithTemplateIdentifier:(id)arg0 ;
-(id)_init;
-(id)_initWithPassThumbnail:(struct CGImage *)arg0 localizedDescription:(id)arg1 provisioningTemplateIdentifier:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPassThumbnail:(struct CGImage *)arg0 localizedDescription:(id)arg1 ;
-(id)initWithTemplateIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif