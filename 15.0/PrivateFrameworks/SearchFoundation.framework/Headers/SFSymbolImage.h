// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSYMBOLIMAGE_H
#define SFSYMBOLIMAGE_H

@class NSString, NSDictionary, NSData;
@protocol SFSymbolImage, NSSecureCoding, NSCopying;


#import "SFImage.h"

@interface SFSymbolImage : SFImage <SFSymbolImage, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) int backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *keyColor;
@property (nonatomic) int primaryColor; // ivar: _primaryColor
@property (nonatomic) BOOL punchThroughBackground; // ivar: _punchThroughBackground
@property (nonatomic) CGFloat scale;
@property (nonatomic) int secondaryColor; // ivar: _secondaryColor
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) CGSize size;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName


+(BOOL)supportsSecureCoding;
-(BOOL)hasBackgroundColor;
-(BOOL)hasPrimaryColor;
-(BOOL)hasPunchThroughBackground;
-(BOOL)hasSecondaryColor;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif