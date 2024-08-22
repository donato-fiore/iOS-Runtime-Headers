// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPACCESSORYSERVERFACTORY_H
#define CHIPACCESSORYSERVERFACTORY_H

@class HMFObject;
@protocol HAPKeyStore;


#import "CHIPAccessoryServerBrowser.h"

@interface CHIPAccessoryServerFactory : HMFObject

@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser; // ivar: _browser
@property (weak, nonatomic) NSObject<HAPKeyStore> *keystore; // ivar: _keystore


+(id)logCategory;
-(id)_createInfoService:(id)arg0 model:(id)arg1 manufacturer:(id)arg2 serialNumber:(id)arg3 ;
-(id)createHAPServiceCommon:(id)arg0 characteristics:(id)arg1 serviceInstanceID:(NSInteger)arg2 ;
-(id)createLightServiceType:(id)arg0 ;
-(id)createLockMechanismServiceType:(id)arg0 ;
-(id)createOnServiceType:(id)arg0 ;
-(id)createTemperatureSensorServiceType:(id)arg0 ;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)logIdentifier;
-(id)vendAccessoryServerWithNodeID:(id)arg0 setupCode:(id)arg1 discriminator:(id)arg2 identifier:(id)arg3 category:(id)arg4 name:(id)arg5 vendorID:(id)arg6 productID:(id)arg7 serialNumber:(id)arg8 ;


@end


#endif