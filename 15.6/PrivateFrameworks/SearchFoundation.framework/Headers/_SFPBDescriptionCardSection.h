// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBDESCRIPTIONCARDSECTION_H
#define _SFPBDESCRIPTIONCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBDescriptionCardSection, NSSecureCoding;


#import "_SFPBImage.h"
#import "_SFPBURL.h"
#import "_SFPBColor.h"
#import "_SFPBText.h"

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBImage *attributionGlyph; // ivar: _attributionGlyph
@property (copy, nonatomic) NSString *attributionText; // ivar: _attributionText
@property (retain, nonatomic) _SFPBURL *attributionURL; // ivar: _attributionURL
@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL descriptionExpand; // ivar: _descriptionExpand
@property (nonatomic) int descriptionSize; // ivar: _descriptionSize
@property (retain, nonatomic) _SFPBText *descriptionText; // ivar: _descriptionText
@property (nonatomic) int descriptionWeight; // ivar: _descriptionWeight
@property (copy, nonatomic) NSString *expandText; // ivar: _expandText
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (nonatomic) int imageAlign; // ivar: _imageAlign
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (copy, nonatomic) NSArray *richDescriptions; // ivar: _richDescriptions
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (nonatomic) int textAlign; // ivar: _textAlign
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL titleNoWrap; // ivar: _titleNoWrap
@property (nonatomic) int titleWeight; // ivar: _titleWeight
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(id)richDescriptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)addRichDescriptions:(id)arg0 ;
-(void)clearPunchoutOptions;
-(void)clearRichDescriptions;
-(void)writeTo:(id)arg0 ;


@end


#endif