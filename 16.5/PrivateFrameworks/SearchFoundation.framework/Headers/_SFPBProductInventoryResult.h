// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBPRODUCTINVENTORYRESULT_H
#define _SFPBPRODUCTINVENTORYRESULT_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBProductInventoryResult, NSSecureCoding;



@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding>



@property (copy, nonatomic) NSArray *availabilitys; // ivar: _availabilitys
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)availabilityCount;
-(id)availabilityAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addAvailability:(id)arg0 ;
-(void)clearAvailability;
-(void)setAvailability:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif