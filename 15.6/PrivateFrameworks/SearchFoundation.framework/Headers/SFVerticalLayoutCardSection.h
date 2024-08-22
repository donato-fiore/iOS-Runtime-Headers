// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFVERTICALLAYOUTCARDSECTION_H
#define SFVERTICALLAYOUTCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFVerticalLayoutCardSection, NSSecureCoding, NSCopying;


#import "SFCardSection.h"
#import "SFColor.h"
#import "SFCommand.h"
#import "SFRichText.h"
#import "SFCard.h"
#import "SFImage.h"
#import "SFUserReportRequest.h"

@interface SFVerticalLayoutCardSection : SFCardSection <SFVerticalLayoutCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (nonatomic) BOOL contentsLeading; // ivar: _contentsLeading
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (retain, nonatomic) SFRichText *footnote; // ivar: _footnote
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) SFImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) SFRichText *thumbnailOverlayText; // ivar: _thumbnailOverlayText
@property (retain, nonatomic) SFRichText *title; // ivar: _title
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)hasCanBeHidden;
-(BOOL)hasContentsLeading;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif