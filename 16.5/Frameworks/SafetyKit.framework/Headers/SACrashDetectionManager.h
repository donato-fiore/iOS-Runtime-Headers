// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACRASHDETECTIONMANAGER_H
#define SACRASHDETECTIONMANAGER_H

@protocol SACrashDetectionClientProtocol, SACrashDetectionDelegate;

#import <Foundation/Foundation.h>

#import "SAClient.h"

@interface SACrashDetectionManager : NSObject <SACrashDetectionClientProtocol>



@property (readonly, nonatomic) NSInteger authorizationStatus;
@property (readonly, nonatomic) SAClient *client;
@property (weak, nonatomic) NSObject<SACrashDetectionDelegate> *delegate; // ivar: _delegate


+(BOOL)availableOverrideSetting;
+(BOOL)isAvailable;
-(id)init;
-(void)_appDidBecomeActive:(id)arg0 ;
-(void)_callDelegateWithCrashEvent:(id)arg0 ;
-(void)requestAuthorizationWithCompletionHandler:(id)arg0 ;
-(void)updateMostRecentCrashDetectionEvent:(id)arg0 ;


@end


#endif