// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFORMATTEDTEXT_H
#define SFFORMATTEDTEXT_H

@class NSString, NSDictionary, NSData;
@protocol SFFormattedText, NSSecureCoding, NSCopying;


#import "SFText.h"
#import "SFImage.h"

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int encapsulationStyle; // ivar: _encapsulationStyle
@property (retain, nonatomic) SFImage *glyph; // ivar: _glyph
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBold; // ivar: _isBold
@property (nonatomic) BOOL isEmphasized; // ivar: _isEmphasized
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxLines;
@property (readonly) Class superclass;
@property (copy) NSString *text;
@property (nonatomic) int textColor; // ivar: _textColor


+(BOOL)supportsSecureCoding;
-(BOOL)hasEncapsulationStyle;
-(BOOL)hasIsBold;
-(BOOL)hasIsEmphasized;
-(BOOL)hasTextColor;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif