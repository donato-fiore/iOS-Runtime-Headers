// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBCOLLECTIONCARDSECTION_H
#define _SFPBCOLLECTIONCARDSECTION_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBCollectionCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBCommandButtonItem.h"
#import "_SFPBCollectionStyle.h"
#import "_SFPBRichText.h"

@interface _SFPBCollectionCardSection : PBCodable <_SFPBCollectionCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) _SFPBCommandButtonItem *buttonItem; // ivar: _buttonItem
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (copy, nonatomic) NSArray *cardSections; // ivar: _cardSections
@property (retain, nonatomic) _SFPBCollectionStyle *collectionStyle; // ivar: _collectionStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBRichText *title; // ivar: _title
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)cardSectionsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addCardSections:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearCardSections;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif