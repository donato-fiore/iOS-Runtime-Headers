// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFIMAGE_H
#define SFIMAGE_H

@class NSString, NSDictionary, NSData;
@protocol SFImage, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFImage.h"

@interface SFImage : NSObject <SFImage, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) SFImage *badgingImage; // ivar: _badgingImage
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) int cornerRoundingStyle; // ivar: _cornerRoundingStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy) NSData *imageData; // ivar: _imageData
@property (nonatomic) BOOL isTemplate; // ivar: _isTemplate
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *keyColor; // ivar: _keyColor
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL shouldCropToCircle; // ivar: _shouldCropToCircle
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) int source; // ivar: _source
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg0 ;
-(BOOL)hasCornerRadius;
-(BOOL)hasCornerRoundingStyle;
-(BOOL)hasIsTemplate;
-(BOOL)hasScale;
-(BOOL)hasShouldCropToCircle;
-(BOOL)hasSize;
-(BOOL)hasSource;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(id)arg0 ;
-(void)loadImageDataWithCompletionHandler:(id)arg0 ;
-(void)loadImageDataWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif