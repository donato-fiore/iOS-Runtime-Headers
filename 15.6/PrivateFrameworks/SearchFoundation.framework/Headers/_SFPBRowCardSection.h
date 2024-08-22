// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBROWCARDSECTION_H
#define _SFPBROWCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBRowCardSection, NSSecureCoding;


#import "_SFPBImage.h"
#import "_SFPBColor.h"
#import "_SFPBRichText.h"

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBImage *attributionImage; // ivar: _attributionImage
@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (nonatomic) BOOL cardPaddingBottom; // ivar: _cardPaddingBottom
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (nonatomic) BOOL imageIsRightAligned; // ivar: _imageIsRightAligned
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL keyNoWrap; // ivar: _keyNoWrap
@property (nonatomic) int keyWeight; // ivar: _keyWeight
@property (retain, nonatomic) _SFPBRichText *leadingSubtitle; // ivar: _leadingSubtitle
@property (retain, nonatomic) _SFPBRichText *leadingText; // ivar: _leadingText
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBRichText *trailingSubtitle; // ivar: _trailingSubtitle
@property (retain, nonatomic) _SFPBRichText *trailingText; // ivar: _trailingText
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *value; // ivar: _value
@property (nonatomic) BOOL valueNoWrap; // ivar: _valueNoWrap
@property (nonatomic) int valueWeight; // ivar: _valueWeight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif