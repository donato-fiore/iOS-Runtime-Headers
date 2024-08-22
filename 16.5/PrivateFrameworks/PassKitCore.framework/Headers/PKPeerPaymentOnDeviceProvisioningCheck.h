// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTONDEVICEPROVISIONINGCHECK_H
#define PKPEERPAYMENTONDEVICEPROVISIONINGCHECK_H


#import <Foundation/Foundation.h>


@interface PKPeerPaymentOnDeviceProvisioningCheck : NSObject



+(BOOL)_hasPeerPaymentPassProvisionedForAccount:(id)arg0 passLibraryDataProvider:(id)arg1 ;
+(BOOL)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg0 ;
+(BOOL)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg0 passLibraryDataProvider:(id)arg1 ;
+(id)_peerPaymentPassForAccount:(id)arg0 passLibraryDataProvider:(id)arg1 ;


@end


#endif