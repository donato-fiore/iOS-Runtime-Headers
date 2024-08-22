// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBDETAILEDROWCARDSECTION_H
#define _SFPBDETAILEDROWCARDSECTION_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBDetailedRowCardSection, NSSecureCoding;


#import "_SFPBActionItem.h"
#import "_SFPBColor.h"
#import "_SFPBButton.h"
#import "_SFPBRichText.h"
#import "_SFPBFormattedText.h"
#import "_SFPBImage.h"

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBActionItem *action; // ivar: _action
@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) _SFPBButton *button; // ivar: _button
@property (copy, nonatomic) NSArray *buttonItems; // ivar: _buttonItems
@property (nonatomic) BOOL buttonItemsAreTrailing; // ivar: _buttonItemsAreTrailing
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *descriptions; // ivar: _descriptions
@property (retain, nonatomic) _SFPBRichText *footnote; // ivar: _footnote
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSecondaryTitleDetached; // ivar: _isSecondaryTitleDetached
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL preventThumbnailImageScaling; // ivar: _preventThumbnailImageScaling
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (retain, nonatomic) _SFPBFormattedText *secondaryTitle; // ivar: _secondaryTitle
@property (retain, nonatomic) _SFPBImage *secondaryTitleImage; // ivar: _secondaryTitleImage
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (nonatomic) BOOL shouldUseCompactDisplay; // ivar: _shouldUseCompactDisplay
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) _SFPBRichText *title; // ivar: _title
@property (retain, nonatomic) _SFPBFormattedText *trailingBottomText; // ivar: _trailingBottomText
@property (retain, nonatomic) _SFPBFormattedText *trailingMiddleText; // ivar: _trailingMiddleText
@property (retain, nonatomic) _SFPBImage *trailingThumbnail; // ivar: _trailingThumbnail
@property (retain, nonatomic) _SFPBFormattedText *trailingTopText; // ivar: _trailingTopText
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)buttonItemsAtIndex:(NSUInteger)arg0 ;
-(id)descriptionsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addButtonItems:(id)arg0 ;
-(void)addDescriptions:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearButtonItems;
-(void)clearDescriptions;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif