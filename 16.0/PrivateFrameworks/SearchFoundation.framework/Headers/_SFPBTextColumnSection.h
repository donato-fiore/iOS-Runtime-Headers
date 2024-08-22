// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBTEXTCOLUMNSECTION_H
#define _SFPBTEXTCOLUMNSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBTextColumnSection, NSSecureCoding;



@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *textLines; // ivar: _textLines
@property (nonatomic) BOOL textNoWrap; // ivar: _textNoWrap
@property (nonatomic) unsigned int textWeight; // ivar: _textWeight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)textLinesAtIndex:(NSUInteger)arg0 ;
-(void)addTextLines:(id)arg0 ;
-(void)clearTextLines;
-(void)writeTo:(id)arg0 ;


@end


#endif