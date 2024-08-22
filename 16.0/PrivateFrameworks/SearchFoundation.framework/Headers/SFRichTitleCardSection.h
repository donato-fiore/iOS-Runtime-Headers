// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFRICHTITLECARDSECTION_H
#define SFRICHTITLECARDSECTION_H

@class NSNumber, NSString, NSArray, NSDictionary, NSData;
@protocol SFRichTitleCardSection, NSSecureCoding, NSCopying;


#import "SFTitleCardSection.h"
#import "SFColor.h"
#import "SFCommand.h"
#import "SFImage.h"
#import "SFCard.h"
#import "SFActionItem.h"
#import "SFRichText.h"
#import "SFUserReportRequest.h"

@interface SFRichTitleCardSection : SFTitleCardSection <SFRichTitleCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSNumber *auxiliaryAlignment; // ivar: _auxiliaryAlignment
@property (copy, nonatomic) NSString *auxiliaryBottomText; // ivar: _auxiliaryBottomText
@property (nonatomic) int auxiliaryBottomTextColor; // ivar: _auxiliaryBottomTextColor
@property (copy, nonatomic) NSString *auxiliaryMiddleText; // ivar: _auxiliaryMiddleText
@property (copy, nonatomic) NSString *auxiliaryTopText; // ivar: _auxiliaryTopText
@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *contentAdvisory; // ivar: _contentAdvisory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL hideVerticalDivider; // ivar: _hideVerticalDivider
@property (retain, nonatomic) SFImage *imageOverlay; // ivar: _imageOverlay
@property (nonatomic) BOOL isCentered; // ivar: _isCentered
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *moreGlyphs; // ivar: _moreGlyphs
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (retain, nonatomic) SFActionItem *playAction; // ivar: _playAction
@property (nonatomic) int playActionAlign; // ivar: _playActionAlign
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (copy, nonatomic) NSNumber *rating; // ivar: _rating
@property (copy, nonatomic) NSString *ratingText; // ivar: _ratingText
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFImage *reviewGlyph; // ivar: _reviewGlyph
@property (nonatomic) BOOL reviewNewLine; // ivar: _reviewNewLine
@property (copy, nonatomic) NSString *reviewText; // ivar: _reviewText
@property (retain, nonatomic) SFRichText *richSubtitle; // ivar: _richSubtitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) BOOL subtitleIsEmphasized; // ivar: _subtitleIsEmphasized
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbnailCropCircle; // ivar: _thumbnailCropCircle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int titleAlign; // ivar: _titleAlign
@property (retain, nonatomic) SFImage *titleImage; // ivar: _titleImage
@property (nonatomic) BOOL titleNoWrap; // ivar: _titleNoWrap
@property (copy, nonatomic) NSNumber *titleWeight; // ivar: _titleWeight
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)hasAuxiliaryBottomTextColor;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHideVerticalDivider;
-(BOOL)hasIsCentered;
-(BOOL)hasPlayActionAlign;
-(BOOL)hasReviewNewLine;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasThumbnailCropCircle;
-(BOOL)hasTitleAlign;
-(BOOL)hasTitleNoWrap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif