// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFQUICKLOOKTHUMBNAILIMAGE_H
#define SFQUICKLOOKTHUMBNAILIMAGE_H

@class NSString, NSDictionary, NSURL, NSData;
@protocol SFQuickLookThumbnailImage, NSSecureCoding, NSCopying;


#import "SFImage.h"

@interface SFQuickLookThumbnailImage : SFImage <SFQuickLookThumbnailImage, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSURL *filePath; // ivar: _filePath
@property (copy, nonatomic) NSString *fileProviderIdentifier; // ivar: _fileProviderIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *keyColor;
@property (nonatomic) CGFloat scale;
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) CGSize size;
@property (nonatomic) int source;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif