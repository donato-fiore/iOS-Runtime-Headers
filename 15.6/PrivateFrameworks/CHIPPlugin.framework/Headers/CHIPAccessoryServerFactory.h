// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSORYSERVERFACTORY_H
#define CHIPACCESSORYSERVERFACTORY_H

@class HMFObject;
@protocol HAPKeyStore;


#import "CHIPAccessoryServerBrowser.h"

@interface CHIPAccessoryServerFactory : HMFObject

@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser; // ivar: _browser
@property (weak, nonatomic) NSObject<HAPKeyStore> *keystore; // ivar: _keystore


+(id)createCHIPPluginHAPServiceCommon:(id)arg0 characteristics:(id)arg1 serviceInstanceID:(NSInteger)arg2 endpointID:(id)arg3 ;
+(id)createInfoService:(id)arg0 model:(id)arg1 manufacturer:(id)arg2 serialNumber:(id)arg3 instanceID:(NSInteger)arg4 ;
+(id)logCategory;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)logIdentifier;
-(id)vendAccessoryServerWithNodeID:(id)arg0 setupCode:(id)arg1 discriminator:(id)arg2 category:(id)arg3 vendorID:(id)arg4 productID:(id)arg5 serialNumber:(id)arg6 firmwareRevision:(id)arg7 ;


@end


#endif