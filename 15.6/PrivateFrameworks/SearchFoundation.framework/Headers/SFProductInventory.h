// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRODUCTINVENTORY_H
#define SFPRODUCTINVENTORY_H

@class NSString, NSDictionary, NSNumber, NSData, NSDate;
@protocol SFProductInventory, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFProductInventory : NSObject <SFProductInventory, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int availabilityStatus; // ivar: _availabilityStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSNumber *distance; // ivar: _distance
@property (nonatomic) int distanceUnit; // ivar: _distanceUnit
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *storeAddress; // ivar: _storeAddress
@property (copy, nonatomic) NSString *storeId; // ivar: _storeId
@property (copy, nonatomic) NSString *storeName; // ivar: _storeName
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)hasAvailabilityStatus;
-(BOOL)hasDistanceUnit;
-(BOOL)hasType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif