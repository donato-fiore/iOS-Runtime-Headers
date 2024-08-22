// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSACCOUNTDEVICEINFOTASK_H
#define AMSACCOUNTDEVICEINFOTASK_H

@class ACAccount, ACAccountStore, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSURLRequestEncoder.h"
#import "AMSURLSession.h"

@interface AMSAccountDeviceInfoTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSURLRequestEncoder *requestEncoder; // ivar: _requestEncoder
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(id)_deviceInfoRequest;
-(id)_requestWithURL:(id)arg0 ;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 bag:(id)arg2 ;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 bag:(id)arg2 requestEncoder:(id)arg3 session:(id)arg4 serialNumber:(id)arg5 ;
-(id)perform;
-(void)_updateAccountWithInfo:(id)arg0 ;


@end


#endif