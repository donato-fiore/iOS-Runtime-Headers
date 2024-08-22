// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFURLIMAGE_H
#define SFURLIMAGE_H

@class NSString, NSURL, NSDictionary, NSData;
@protocol SFURLImage, NSSecureCoding, NSCopying;


#import "SFImage.h"

@interface SFURLImage : SFImage <SFURLImage, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (copy, nonatomic) NSURL *darkUrlValue; // ivar: _darkUrlValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
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
@property (copy, nonatomic) NSURL *urlValue; // ivar: _urlValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif