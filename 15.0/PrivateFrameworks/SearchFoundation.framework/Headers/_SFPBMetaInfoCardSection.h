// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBMETAINFOCARDSECTION_H
#define _SFPBMETAINFOCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBMetaInfoCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBImage.h"
#import "_SFPBURL.h"

@interface _SFPBMetaInfoCardSection : PBCodable <_SFPBMetaInfoCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) _SFPBImage *badge; // ivar: _badge
@property (nonatomic) BOOL canBeHidden; // ivar: _canBeHidden
@property (retain, nonatomic) _SFPBURL *contentURL; // ivar: _contentURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBottomPadding; // ivar: _hasBottomPadding
@property (nonatomic) BOOL hasTopPadding; // ivar: _hasTopPadding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPBURL *hostPageURL; // ivar: _hostPageURL
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // ivar: _punchoutOptions
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // ivar: _punchoutPickerDismissText
@property (copy, nonatomic) NSString *punchoutPickerTitle; // ivar: _punchoutPickerTitle
@property (nonatomic) int separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (nonatomic) BOOL trending; // ivar: _trending
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