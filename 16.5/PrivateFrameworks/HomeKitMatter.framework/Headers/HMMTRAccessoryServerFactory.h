// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRACCESSORYSERVERFACTORY_H
#define HMMTRACCESSORYSERVERFACTORY_H

@class HMFObject;
@protocol HAPKeyStore;


#import "HMMTRAccessoryServerBrowser.h"

@interface HMMTRAccessoryServerFactory : HMFObject

@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser; // ivar: _browser
@property (weak, nonatomic) NSObject<HAPKeyStore> *keystore; // ivar: _keystore


+(id)createHMMTRHAPServiceCommon:(id)arg0 characteristics:(id)arg1 serviceLabelIndex:(id)arg2 serviceInstanceID:(id)arg3 endpointID:(id)arg4 nodeID:(id)arg5 topology:(id)arg6 clusterIDCharacteristicMap:(id)arg7 linkedServices:(id)arg8 ;
+(id)createHMMTRHAPServiceLabelServiceWithEndpointID:(id)arg0 nodeID:(id)arg1 ;
+(id)createInfoService:(id)arg0 model:(id)arg1 manufacturer:(id)arg2 serialNumber:(id)arg3 instanceID:(NSInteger)arg4 endpointID:(id)arg5 ;
+(id)createInfoService:(id)arg0 model:(id)arg1 manufacturer:(id)arg2 serialNumber:(id)arg3 instanceID:(NSUInteger)arg4 endpointID:(id)arg5 nodeID:(id)arg6 legacyInstanceIDAssignment:(BOOL)arg7 ;
+(id)instanceIDForCharacteristicType:(id)arg0 serviceType:(id)arg1 endpointID:(id)arg2 nodeID:(id)arg3 ;
+(id)logCategory;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)logIdentifier;
-(id)vendAccessoryServerWithNodeID:(id)arg0 setupCode:(id)arg1 discriminator:(id)arg2 category:(id)arg3 vendorID:(id)arg4 productID:(id)arg5 serialNumber:(id)arg6 firmwareRevision:(id)arg7 ;


@end


#endif