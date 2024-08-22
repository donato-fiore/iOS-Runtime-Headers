// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBSTROKEANIMATIONCARDSECTION_H
#define _SFPBSTROKEANIMATIONCARDSECTION_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBStrokeAnimationCardSection, NSSecureCoding;


#import "_SFPBColor.h"

@interface _SFPBStrokeAnimationCardSection : PBCodable <_SFPBStrokeAnimationCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (copy, nonatomic) NSArray *characters; // ivar: _characters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *pronunciations; // ivar: _pronunciations
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (copy, nonatomic) NSString *strokeAnimationRepresentation; // ivar: _strokeAnimationRepresentation
@property (copy, nonatomic) NSArray *strokeNames; // ivar: _strokeNames
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)charactersAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)pronunciationsAtIndex:(NSUInteger)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(id)strokeNamesAtIndex:(NSUInteger)arg0 ;
-(void)addCharacters:(id)arg0 ;
-(void)addPronunciations:(id)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)addStrokeNames:(id)arg0 ;
-(void)clearCharacters;
-(void)clearPronunciations;
-(void)clearPunchoutOptions;
-(void)clearStrokeNames;
-(void)writeTo:(id)arg0 ;


@end


#endif