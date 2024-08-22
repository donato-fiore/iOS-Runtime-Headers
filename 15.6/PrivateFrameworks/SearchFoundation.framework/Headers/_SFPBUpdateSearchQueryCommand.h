// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBUPDATESEARCHQUERYCOMMAND_H
#define _SFPBUPDATESEARCHQUERYCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBUpdateSearchQueryCommand, NSSecureCoding;



@interface _SFPBUpdateSearchQueryCommand : PBCodable <_SFPBUpdateSearchQueryCommand, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int querySource; // ivar: _querySource
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif