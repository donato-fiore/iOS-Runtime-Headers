// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBTEXTCOLUMN_H
#define _SFPBTEXTCOLUMN_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBTextColumn, NSSecureCoding;



@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)sectionsAtIndex:(NSUInteger)arg0 ;
-(void)addSections:(id)arg0 ;
-(void)clearSections;
-(void)writeTo:(id)arg0 ;


@end


#endif