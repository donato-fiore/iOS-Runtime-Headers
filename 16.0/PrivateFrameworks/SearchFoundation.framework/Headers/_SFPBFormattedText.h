// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBFORMATTEDTEXT_H
#define _SFPBFORMATTEDTEXT_H

@class PBCodable, NSString, NSData;
@protocol _SFPBFormattedText, NSSecureCoding;


#import "_SFPBImage.h"
#import "_SFPBText.h"

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int encapsulationStyle; // ivar: _encapsulationStyle
@property (retain, nonatomic) _SFPBImage *glyph; // ivar: _glyph
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBold; // ivar: _isBold
@property (nonatomic) BOOL isEmphasized; // ivar: _isEmphasized
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBText *text; // ivar: _text
@property (nonatomic) int textColor; // ivar: _textColor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif