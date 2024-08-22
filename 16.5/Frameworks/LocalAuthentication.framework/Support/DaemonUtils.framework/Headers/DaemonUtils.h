// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAEMONUTILS_H
#define DAEMONUTILS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DaemonUtils : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue


+(BOOL)_isNonUiExtensionPointIdentifier:(id)arg0 ;
+(BOOL)callerIsAllowedNonUiExtension:(id)arg0 ;
+(BOOL)deviceHasPearl;
+(BOOL)deviceHasSEP;
+(BOOL)deviceHasSecureDoublePressHW;
+(BOOL)deviceHasSpecialTouchID;
+(BOOL)deviceHasTouchID;
+(BOOL)deviceHasTouchIDAndSecureDoublePress;
+(BOOL)deviceIsPoseidon;
+(BOOL)deviceSupportsSecureDoubleClick;
+(BOOL)isSpecialUiAvailable;
+(id)callerDisplayNameWithPid:(int)arg0 auditToken:(struct ? )arg1 bundleId:(*id)arg2 ;
+(id)queue;
+(id)sharedInstance;
+(void)dispatchReallyAfter:(NSInteger)arg0 tolerance:(CGFloat)arg1 queue:(id)arg2 block:(id)arg3 ;
+(void)dispatchSyncOnMain:(id)arg0 ;
-(id)init;


@end


#endif