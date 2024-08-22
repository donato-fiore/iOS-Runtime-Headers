// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFROWCARDSECTION_H
#define SFROWCARDSECTION_H

@class NSString, NSArray, NSDictionary, NSData, NSNumber;
@protocol SFRowCardSection, NSSecureCoding, NSCopying;


#import "SFCardSection.h"
#import "SFImage.h"
#import "SFColor.h"
#import "SFCommand.h"
#import "SFRichText.h"
#import "SFCard.h"
#import "SFUserReportRequest.h"

@interface SFRowCardSection : SFCardSection <SFRowCardSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SFImage *attributionImage; // ivar: _attributionImage
@property (retain, nonatomic) SFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (nonatomic) BOOL cardPaddingBottom; // ivar: _cardPaddingBottom
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDivider;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (nonatomic) BOOL imageIsRightAligned; // ivar: _imageIsRightAligned
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL keyNoWrap; // ivar: _keyNoWrap
@property (copy, nonatomic) NSNumber *keyWeight; // ivar: _keyWeight
@property (retain, nonatomic) SFRichText *leadingSubtitle; // ivar: _leadingSubtitle
@property (retain, nonatomic) SFRichText *leadingText; // ivar: _leadingText
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
@property (retain, nonatomic) SFRichText *trailingSubtitle; // ivar: _trailingSubtitle
@property (retain, nonatomic) SFRichText *trailingText; // ivar: _trailingText
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (copy, nonatomic) NSString *value; // ivar: _value
@property (nonatomic) BOOL valueNoWrap; // ivar: _valueNoWrap
@property (copy, nonatomic) NSNumber *valueWeight; // ivar: _valueWeight


+(BOOL)supportsSecureCoding;
-(BOOL)hasCanBeHidden;
-(BOOL)hasCardPaddingBottom;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasHasTopPadding;
-(BOOL)hasImageIsRightAligned;
-(BOOL)hasKeyNoWrap;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasValueNoWrap;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif