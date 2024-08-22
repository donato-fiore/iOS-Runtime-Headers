// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBRICHTITLECARDSECTION_H
#define _SFPBRICHTITLECARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBRichTitleCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBImage.h"
#import "_SFPBActionItem.h"
#import "_SFPBRichText.h"

@interface _SFPBRichTitleCardSection : PBCodable <_SFPBRichTitleCardSection, NSSecureCoding>



@property (nonatomic) int auxiliaryAlignment; // ivar: _auxiliaryAlignment
@property (copy, nonatomic) NSString *auxiliaryBottomText; // ivar: _auxiliaryBottomText
@property (nonatomic) int auxiliaryBottomTextColor; // ivar: _auxiliaryBottomTextColor
@property (copy, nonatomic) NSString *auxiliaryMiddleText; // ivar: _auxiliaryMiddleText
@property (copy, nonatomic) NSString *auxiliaryTopText; // ivar: _auxiliaryTopText
@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (copy, nonatomic) NSString *contentAdvisory; // ivar: _contentAdvisory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideVerticalDivider; // ivar: _hideVerticalDivider
@property (retain, nonatomic) _SFPBImage *imageOverlay; // ivar: _imageOverlay
@property (nonatomic) BOOL isCentered; // ivar: _isCentered
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *moreGlyphs; // ivar: _moreGlyphs
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (retain, nonatomic) _SFPBActionItem *playAction; // ivar: _playAction
@property (nonatomic) int playActionAlign; // ivar: _playActionAlign
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) float rating; // ivar: _rating
@property (copy, nonatomic) NSString *ratingText; // ivar: _ratingText
@property (retain, nonatomic) _SFPBImage *reviewGlyph; // ivar: _reviewGlyph
@property (nonatomic) BOOL reviewNewLine; // ivar: _reviewNewLine
@property (copy, nonatomic) NSString *reviewText; // ivar: _reviewText
@property (retain, nonatomic) _SFPBRichText *richSubtitle; // ivar: _richSubtitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) BOOL subtitleIsEmphasized; // ivar: _subtitleIsEmphasized
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbnailCropCircle; // ivar: _thumbnailCropCircle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int titleAlign; // ivar: _titleAlign
@property (retain, nonatomic) _SFPBImage *titleImage; // ivar: _titleImage
@property (nonatomic) BOOL titleNoWrap; // ivar: _titleNoWrap
@property (nonatomic) int titleWeight; // ivar: _titleWeight
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)moreGlyphsAtIndex:(NSUInteger)arg0 ;
-(id)offersAtIndex:(NSUInteger)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addMoreGlyphs:(id)arg0 ;
-(void)addOffers:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearMoreGlyphs;
-(void)clearOffers;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif