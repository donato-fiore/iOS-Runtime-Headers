// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBCOLORBARCARDSECTION_H
#define _SFPBCOLORBARCARDSECTION_H

@class PBCodable, NSString, NSData;
@protocol _SFPBColorBarCardSection, NSSecureCoding;


#import "_SFPBColor.h"
#import "_SFPBRichText.h"

@interface _SFPBColorBarCardSection : PBCodable <_SFPBColorBarCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBColor *barColor; // ivar: _barColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBRichText *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBRichText *title; // ivar: _title
@property (retain, nonatomic) _SFPBRichText *topText; // ivar: _topText


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif