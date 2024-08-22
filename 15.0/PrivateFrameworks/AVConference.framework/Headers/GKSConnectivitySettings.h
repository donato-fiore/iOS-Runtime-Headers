// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSCONNECTIVITYSETTINGS_H
#define GKSCONNECTIVITYSETTINGS_H


#import <Foundation/Foundation.h>


@interface GKSConnectivitySettings : NSObject



+(BOOL)getFeatureFlagForStorebagKey:(id)arg0 userDefaultKey:(struct __CFString *)arg1 featureFlagDomain:(char *)arg2 featureFlagName:(char *)arg3 ;
+(BOOL)supportiRATRecommendation;
+(BOOL)supportsEVSCodec;
+(BOOL)supportsHEVCEncoding;
+(BOOL)supportsRedAudio;
+(CGFloat)getAdaptiveLearningA;
+(CGFloat)getAdaptiveLearningB;
+(CGFloat)getAdjustmentFactorA;
+(CGFloat)getAdjustmentFactorB;
+(CGFloat)getAdjustmentFactorC;
+(CGFloat)getLongTermValueWeightA;
+(CGFloat)getLongTermValueWeightB;
+(CGFloat)getLongTermValueWeightC;
+(CGFloat)getNoRemoteDuplicationThresholdFast;
+(CGFloat)getRemoteMediaStallTimeout;
+(CGFloat)getShortTermValueWeightA;
+(CGFloat)getShortTermValueWeightB;
+(CGFloat)getShortTermValueWeightC;
+(CGFloat)getThresholdForSwitch:(unsigned int)arg0 ;
+(id)getAddressForService:(id)arg0 ;
+(id)getAllSettings;
+(id)getClientOption:(id)arg0 ;
+(id)getStorebagValueForStorebagKey:(id)arg0 userDefaultKey:(struct __CFString *)arg1 defaultValue:(id)arg2 isDoubleType:(BOOL)arg3 ;
+(id)getStorebagValueStorebagKey:(id)arg0 defaultValue:(id)arg1 ;
+(id)getTestGroupPermutations:(unsigned char)arg0 ;
+(id)getVCRCSeverBagConfigWithKey:(id)arg0 ;
+(int)getAdaptiveLearningState;
+(int)getDecryptionMKMRecoveryInterval;
+(int)getDecryptionTimeoutInterval;
+(int)getKeepAliveTimeoutFromCarrierBundle;
+(int)getLongTermHistoryLength;
+(int)getNATTypeFromCarrierBundle;
+(int)getNewSessionJoiningInterval;
+(int)getRateControllerType;
+(int)getShortTermHistoryLength;
+(int)getWRMRSSIThresholdValue:(int)arg0 ;
+(struct tagIPPORT *)getCachedIPPort;
+(struct tagIPPORT *)getIPPortForService:(id)arg0 ;
+(unsigned char)getAbTestingState;
+(unsigned int)getAbTestMasterLocalSwitches;
+(void)clearAllSettingsWithRefreshIntervalInSeconds:(int)arg0 ;
+(void)setAddress:(id)arg0 forService:(id)arg1 ;
+(void)setClientOptions:(id)arg0 ;
+(void)setServerAddresses:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif