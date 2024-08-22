// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHSERVICE_H
#define HKHEALTHSERVICE_H

@class NSData, NSUUID, NSString, CBPeripheral;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHealthService : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *advertisementData; // ivar: _advertisementData
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) CGFloat lastConnection; // ivar: _lastConnection
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (copy, nonatomic) NSString *serviceId; // ivar: _serviceId
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithType:(NSInteger)arg0 identifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3 ;
-(id)_localizedHealthServiceType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initUnknownServiceWithIdentifier:(id)arg0 name:(id)arg1 serviceId:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif