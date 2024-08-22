// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDEVICEIDENTITYCERTIFICATETASK_H
#define AMSDEVICEIDENTITYCERTIFICATETASK_H

@protocol AMSBagProtocol, OS_dispatch_queue;


#import "AMSTask.h"

@interface AMSDeviceIdentityCertificateTask : AMSTask

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue


-(id)initWithBag:(id)arg0 ;
-(id)performDeviceIdentityRequestForAbsinthe;
-(id)performDeviceIdentityRequestForFraudReport;
-(id)performDeviceIdentityRequestWithBaaOptions:(id)arg0 ttlBagKey:(id)arg1 logInformation:(id)arg2 ;


@end


#endif