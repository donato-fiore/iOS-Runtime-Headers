// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDETAILEDROWCARDSECTION_H
#define SFDETAILEDROWCARDSECTION_H

@class NSArray, NSString, NSDictionary, NSData;
@protocol SFDetailedRowCardSection, NSSecureCoding, NSCopying;


#import "SFCardSection.h"
#import "SFActionItem.h"
#import "SFColor.h"
#import "SFButton.h"
#import "SFCommand.h"
#import "SFRichText.h"
#import "SFCard.h"
#import "SFFormattedText.h"
#import "SFImage.h"
#import "SFUserReportRequest.h"

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFActionItem *action; // ivar: _action
@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) SFButton *button; // ivar: _button
@property (copy, nonatomic) NSArray *buttonItems; // ivar: _buttonItems
@property (nonatomic) BOOL buttonItemsAreTrailing; // ivar: _buttonItemsAreTrailing
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (readonly) NSArray *cardsFromButtons;
@property (readonly) NSArray *cardsFromEmbeddedSections;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *descriptions; // ivar: _descriptions
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (retain, nonatomic) SFRichText *footnote; // ivar: _footnote
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL isSecondaryTitleDetached; // ivar: _isSecondaryTitleDetached
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (nonatomic) BOOL preventThumbnailImageScaling; // ivar: _preventThumbnailImageScaling
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFFormattedText *secondaryTitle; // ivar: _secondaryTitle
@property (retain, nonatomic) SFImage *secondaryTitleImage; // ivar: _secondaryTitleImage
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (nonatomic) BOOL shouldUseCompactDisplay; // ivar: _shouldUseCompactDisplay
@property (readonly) Class superclass;
@property (retain, nonatomic) SFImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) SFRichText *title; // ivar: _title
@property (retain, nonatomic) SFFormattedText *trailingBottomText; // ivar: _trailingBottomText
@property (retain, nonatomic) SFFormattedText *trailingMiddleText; // ivar: _trailingMiddleText
@property (retain, nonatomic) SFImage *trailingThumbnail; // ivar: _trailingThumbnail
@property (retain, nonatomic) SFFormattedText *trailingTopText; // ivar: _trailingTopText
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)hasButtonItemsAreTrailing;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasIsSecondaryTitleDetached;
-(BOOL)hasPreventThumbnailImageScaling;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasShouldUseCompactDisplay;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif