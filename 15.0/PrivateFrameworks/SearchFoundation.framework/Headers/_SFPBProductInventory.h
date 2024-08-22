// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBPRODUCTINVENTORY_H
#define _SFPBPRODUCTINVENTORY_H

@class PBCodable, NSString, NSData;
@protocol _SFPBProductInventory, NSSecureCoding;


#import "_SFPBDate.h"

@interface _SFPBProductInventory : PBCodable <_SFPBProductInventory, NSSecureCoding>



@property (nonatomic) int availabilityStatus; // ivar: _availabilityStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float distance; // ivar: _distance
@property (nonatomic) int distanceUnit; // ivar: _distanceUnit
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *storeAddress; // ivar: _storeAddress
@property (copy, nonatomic) NSString *storeId; // ivar: _storeId
@property (copy, nonatomic) NSString *storeName; // ivar: _storeName
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBDate *timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif