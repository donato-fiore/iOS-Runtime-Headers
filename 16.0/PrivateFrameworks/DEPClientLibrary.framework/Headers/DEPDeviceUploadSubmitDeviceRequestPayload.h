// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEPDEVICEUPLOADSUBMITDEVICEREQUESTPAYLOAD_H
#define DEPDEVICEUPLOADSUBMITDEVICEREQUESTPAYLOAD_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DEPDeviceUploadUser.h"
#import "DEPDeviceUploadRequestType.h"

@interface DEPDeviceUploadSubmitDeviceRequestPayload : NSObject <NSSecureCoding>



@property (readonly, nonatomic) DEPDeviceUploadUser *approver; // ivar: _approver
@property (readonly, nonatomic) NSString *orgId; // ivar: _orgId
@property (readonly, nonatomic) NSString *orgName; // ivar: _orgName
@property (readonly, nonatomic) DEPDeviceUploadRequestType *requestType; // ivar: _requestType
@property (readonly, nonatomic) NSString *soldToId; // ivar: _soldToId
@property (readonly, nonatomic) DEPDeviceUploadUser *submitter; // ivar: _submitter


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrgId:(id)arg0 orgName:(id)arg1 requestType:(id)arg2 submitter:(id)arg3 approver:(id)arg4 soldToId:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif