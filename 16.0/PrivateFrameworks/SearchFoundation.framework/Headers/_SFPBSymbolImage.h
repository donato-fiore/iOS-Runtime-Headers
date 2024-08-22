// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBSYMBOLIMAGE_H
#define _SFPBSYMBOLIMAGE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBSymbolImage, NSSecureCoding;



@interface _SFPBSymbolImage : PBCodable <_SFPBSymbolImage, NSSecureCoding>



@property (nonatomic) int backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int primaryColor; // ivar: _primaryColor
@property (nonatomic) BOOL punchThroughBackground; // ivar: _punchThroughBackground
@property (nonatomic) int secondaryColor; // ivar: _secondaryColor
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif