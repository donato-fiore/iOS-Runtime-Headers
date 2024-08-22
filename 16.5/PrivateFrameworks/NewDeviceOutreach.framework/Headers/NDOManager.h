// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOMANAGER_H
#define NDOMANAGER_H


#import <Foundation/Foundation.h>


@interface NDOManager : NSObject



+(void)postCAEventFor:(id)arg0 eventDict:(id)arg1 ;
-(BOOL)checkIsAvailableInStore:(id)arg0 ;
-(id)agentConnection;
-(id)defaultDevice;
-(id)getDecodedParamsForPath:(id)arg0 ;
-(id)getDefaultDeviceInfoUsingForceCachedPolicy;
-(id)getDeviceInfoUsingForceCachedPolicyForSerialNumber:(id)arg0 ;
-(id)pairedBTDevices;
-(id)pairedWatches;
-(void)appSupportDictionaryWithReply:(id)arg0 ;
-(void)appleAccountAddedWithReply:(id)arg0 ;
-(void)dismissFollowUpForSerialNumber:(id)arg0 completion:(id)arg1 ;
-(void)dismissNotificationForSerialNumber:(id)arg0 completion:(id)arg1 ;
-(void)getAllFUPEligibleDeviceInfosUsingPolicy:(NSUInteger)arg0 updateFollowUps:(BOOL)arg1 withReply:(id)arg2 ;
-(void)getDefaultDeviceInfoUsingPolicy:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)getDeviceInfoForSerialNumber:(id)arg0 usingPolicy:(NSUInteger)arg1 params:(id)arg2 withReply:(id)arg3 ;
-(void)getDeviceInfoForSerialNumber:(id)arg0 usingPolicy:(NSUInteger)arg1 withReply:(id)arg2 ;
-(void)getWarrantyUsingPolicy:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)scheduleOutreachAfter:(CGFloat)arg0 withReply:(id)arg1 ;
-(void)ulWebURLOverride:(id)arg0 ;
-(void)webURLOverride:(id)arg0 ;


@end


#endif