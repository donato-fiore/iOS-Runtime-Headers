// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPUBLICDBINFO_H
#define MSPUBLICDBINFO_H

@class NSArray, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPublicDBInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *bundleIDS; // ivar: _bundleIDS
@property (copy, nonatomic) NSString *configurationPublicKey; // ivar: _configurationPublicKey
@property (copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (readonly, copy, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (copy, nonatomic) NSURL *serviceIconPath; // ivar: _serviceIconPath
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 serviceID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif