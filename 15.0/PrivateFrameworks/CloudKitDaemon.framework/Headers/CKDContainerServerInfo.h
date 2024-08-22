// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDCONTAINERSERVERINFO_H
#define CKDCONTAINERSERVERINFO_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKDContainerServerInfo : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *containerScopedUserID; // ivar: _containerScopedUserID
@property (nonatomic) NSInteger environment; // ivar: _environment
@property (copy, nonatomic) NSString *orgAdminUserID; // ivar: _orgAdminUserID
@property (copy, nonatomic) NSURL *publicCloudDBURL; // ivar: _publicCloudDBURL
@property (copy, nonatomic) NSURL *publicCodeServiceURL; // ivar: _publicCodeServiceURL
@property (copy, nonatomic) NSURL *publicDeviceServiceURL; // ivar: _publicDeviceServiceURL
@property (copy, nonatomic) NSURL *publicMetricsServiceURL; // ivar: _publicMetricsServiceURL
@property (copy, nonatomic) NSURL *publicShareServiceURL; // ivar: _publicShareServiceURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif