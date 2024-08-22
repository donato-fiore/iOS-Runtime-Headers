// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICEPROPERTIES_H
#define GTSERVICEPROPERTIES_H

@class NSUUID, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTServiceProperties : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSUUID *bootSessionUUID; // ivar: _bootSessionUUID
@property (copy, nonatomic) NSString *deviceUDID; // ivar: _deviceUDID
@property (nonatomic) int platform; // ivar: _platform
@property (readonly, nonatomic) NSArray *protocolMethods; // ivar: _protocolMethods
@property (readonly, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (nonatomic) NSUInteger servicePort; // ivar: _servicePort


+(BOOL)supportsSecureCoding;
+(id)protocolMethods:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtocol:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif