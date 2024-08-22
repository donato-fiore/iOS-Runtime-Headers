// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEPDEVICEUPLOADORGANIZATION_H
#define DEPDEVICEUPLOADORGANIZATION_H

@class NSArray, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEPDeviceUploadOrganization : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *approvers; // ivar: _approvers
@property (readonly, nonatomic) BOOL deviceAdditionDepEnabled;
@property (retain, nonatomic) NSNumber *deviceAdditionDepEnabledNum; // ivar: _deviceAdditionDepEnabledNum
@property (readonly, nonatomic) BOOL deviceAdditionGbiEnabled;
@property (retain, nonatomic) NSNumber *deviceAdditionGbiEnabledNum; // ivar: _deviceAdditionGbiEnabledNum
@property (readonly, nonatomic) BOOL idmsRemoveDeviceEnabled;
@property (retain, nonatomic) NSNumber *idmsRemoveDeviceEnabledNum; // ivar: _idmsRemoveDeviceEnabledNum
@property (readonly, nonatomic) BOOL idmsWhitelistingEnabled;
@property (retain, nonatomic) NSNumber *idmsWhitelistingEnabledNum; // ivar: _idmsWhitelistingEnabledNum
@property (readonly, nonatomic) NSString *orgId; // ivar: _orgId
@property (readonly, nonatomic) NSString *orgName; // ivar: _orgName
@property (readonly, nonatomic) BOOL skipItrackCheck;
@property (retain, nonatomic) NSNumber *skipItrackCheckNum; // ivar: _skipItrackCheckNum


+(BOOL)supportsSecureCoding;
-(id)_approversFromApproversArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 ;
-(id)initWithOrgId:(id)arg0 orgName:(id)arg1 approvers:(id)arg2 skipItrackCheck:(BOOL)arg3 deviceAdditionDepEnabled:(BOOL)arg4 idmsWhitelistingEnabled:(BOOL)arg5 idmsRemoveDeviceEnabled:(BOOL)arg6 deviceAdditionGbiEnabled:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif