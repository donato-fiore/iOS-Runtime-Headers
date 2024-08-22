// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDOMANAGER_H
#define NDOMANAGER_H


#import <Foundation/Foundation.h>


@interface NDOManager : NSObject



+(void)postCAEventFor:(id)arg0 eventDict:(id)arg1 ;
-(BOOL)checkIsAvailableInStore:(id)arg0 ;
-(id)agentConnection;
-(id)defaultDevice;
-(id)getDefaultDeviceInfoUsingForceCachedPolicy;
-(id)getDeviceInfoUsingForceCachedPolicyForSerialNumber:(id)arg0 ;
-(id)pairedDevices;
-(void)appSupportDictionaryWithReply:(id)arg0 ;
-(void)appleAccountAddedWithReply:(id)arg0 ;
-(void)dismissFollowUpForSerialNumber:(id)arg0 completion:(id)arg1 ;
-(void)getAllDeviceInfosUsingPolicy:(NSUInteger)arg0 updateFollowUps:(BOOL)arg1 withReply:(id)arg2 ;
-(void)getDefaultDeviceInfoUsingPolicy:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)getDeviceInfoForSerialNumber:(id)arg0 usingPolicy:(NSUInteger)arg1 withReply:(id)arg2 ;
-(void)getWarrantyUsingPolicy:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)scheduleOutreachAfter:(CGFloat)arg0 withReply:(id)arg1 ;
-(void)webURLOverride:(id)arg0 ;


@end


#endif