// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCOMPANIONSERVICE_H
#define SFCOMPANIONSERVICE_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying>



@property (copy) NSString *deviceID; // ivar: _deviceID
@property (copy) NSString *deviceName; // ivar: _deviceName
@property (copy) NSString *identifier; // ivar: _identifier
@property (copy) NSString *ipAddress; // ivar: _ipAddress
@property (copy) NSString *managerID; // ivar: _managerID
@property (copy) NSNumber *nsxpcVersion; // ivar: _nsxpcVersion
@property (copy) NSString *serviceType; // ivar: _serviceType


+(BOOL)supportsSecureCoding;
+(id)serviceFromAuthorData:(id)arg0 ;
+(id)serviceFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToService:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)messageData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif