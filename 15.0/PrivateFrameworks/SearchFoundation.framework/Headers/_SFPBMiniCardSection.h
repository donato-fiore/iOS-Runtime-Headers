// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBMINICARDSECTION_H
#define _SFPBMINICARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBMiniCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBImage.h"
#import "_SFPBRichText.h"

@interface _SFPBMiniCardSection : PBCodable <_SFPBMiniCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBImage *image; // ivar: _image
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (retain, nonatomic) _SFPBRichText *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBRichText *title; // ivar: _title
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)punchoutOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPunchoutOptions:(id)arg0 ;
-(void)clearPunchoutOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif