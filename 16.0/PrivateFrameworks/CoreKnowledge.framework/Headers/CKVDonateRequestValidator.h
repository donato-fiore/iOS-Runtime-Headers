// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDONATEREQUESTVALIDATOR_H
#define CKVDONATEREQUESTVALIDATOR_H


#import <Foundation/Foundation.h>

#import "CKVSettings.h"

@interface CKVDonateRequestValidator : NSObject {
    CKVSettings *_settings;
}




-(BOOL)_isUserIdInHome:(id)arg0 ;
-(id)applicationBundleIdFromConnection:(id)arg0 ;
-(id)applicationBundleIdsProxyDonateEntitlement:(id)arg0 ;
-(id)applicationRecordFromRequest:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(unsigned short)_validateKoaDonationEntitlementForConnection:(id)arg0 ;
-(unsigned short)_validateRequestForLocalDonation:(id)arg0 connection:(id)arg1 ;
-(unsigned short)_validateRequestForLocalLinkDynamicTermDonation:(id)arg0 connection:(id)arg1 ;
-(unsigned short)_validateRequestForLocalUserSpecificDonation:(id)arg0 connection:(id)arg1 ;
-(unsigned short)_validateRequestForMUXContactDonation:(id)arg0 connection:(id)arg1 ;
-(unsigned short)_validateRequestForRemoteDonation:(id)arg0 connection:(id)arg1 ;
-(unsigned short)validateRequest:(id)arg0 connection:(id)arg1 ;


@end


#endif