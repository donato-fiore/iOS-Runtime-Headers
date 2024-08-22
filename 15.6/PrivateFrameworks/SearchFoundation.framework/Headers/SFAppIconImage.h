// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPICONIMAGE_H
#define SFAPPICONIMAGE_H

@class NSString, NSDictionary, NSData;
@protocol SFAppIconImage, NSSecureCoding, NSCopying;


#import "SFImage.h"

@interface SFAppIconImage : SFImage <SFAppIconImage, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) int iconType; // ivar: _iconType
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
-(BOOL)hasIconType;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif