// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDESCRIPTIONCARDSECTION_H
#define SFDESCRIPTIONCARDSECTION_H

@class NSString, NSURL, NSArray, NSNumber, NSDictionary, NSData;
@protocol SFDescriptionCardSection, NSSecureCoding, NSCopying;


#import "SFTitleCardSection.h"
#import "SFImage.h"
#import "SFColor.h"
#import "SFCommand.h"
#import "SFText.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFDescriptionCardSection : SFTitleCardSection <SFDescriptionCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFImage *attributionGlyph; // ivar: _attributionGlyph
@property (copy, nonatomic) NSString *attributionText; // ivar: _attributionText
@property (copy, nonatomic) NSURL *attributionURL; // ivar: _attributionURL
@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL descriptionExpand; // ivar: _descriptionExpand
@property (copy, nonatomic) NSNumber *descriptionSize; // ivar: _descriptionSize
@property (retain, nonatomic) SFText *descriptionText; // ivar: _descriptionText
@property (copy, nonatomic) NSNumber *descriptionWeight; // ivar: _descriptionWeight
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (copy, nonatomic) NSString *expandText; // ivar: _expandText
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (nonatomic) int imageAlign; // ivar: _imageAlign
@property (nonatomic) BOOL isCentered;
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
@property (copy, nonatomic) NSArray *richDescriptions; // ivar: _richDescriptions
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (nonatomic) int textAlign; // ivar: _textAlign
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL titleNoWrap; // ivar: _titleNoWrap
@property (copy, nonatomic) NSNumber *titleWeight; // ivar: _titleWeight
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)hasCanBeHidden;
-(BOOL)hasDescriptionExpand;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasImageAlign;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasTextAlign;
-(BOOL)hasTitleNoWrap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif