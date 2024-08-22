// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCLOUDSTOREZONECREATIONMANAGER_H
#define PKPAYMENTCLOUDSTOREZONECREATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"

@interface PKPaymentCloudStoreZoneCreationManager : NSObject {
    PKPaymentWebService *_webService;
}




-(id)initWithWebService:(id)arg0 ;
-(void)triggerCloudStoreZoneCreationIfNeededForProvisioningRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif