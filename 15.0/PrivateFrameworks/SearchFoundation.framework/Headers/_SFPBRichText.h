// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBRICHTEXT_H
#define _SFPBRICHTEXT_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBRichText, NSSecureCoding;


#import "_SFPBGraphicalFloat.h"
#import "_SFPBText.h"

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding>



@property (copy, nonatomic) NSString *contentAdvisory; // ivar: _contentAdvisory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *formattedTextPieces; // ivar: _formattedTextPieces
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *icons; // ivar: _icons
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBGraphicalFloat *starRating; // ivar: _starRating
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBText *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)formattedTextPiecesAtIndex:(NSUInteger)arg0 ;
-(id)iconsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addFormattedTextPieces:(id)arg0 ;
-(void)addIcons:(id)arg0 ;
-(void)clearFormattedTextPieces;
-(void)clearIcons;
-(void)writeTo:(id)arg0 ;


@end


#endif