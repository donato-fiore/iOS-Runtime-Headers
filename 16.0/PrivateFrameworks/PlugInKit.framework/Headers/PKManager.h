// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMANAGER_H
#define PKMANAGER_H

@protocol PKProxyFactory;

#import <Foundation/Foundation.h>

#import "PKDaemonClient.h"

@interface PKManager : NSObject

@property (retain) PKDaemonClient *client; // ivar: _client
@property (retain) NSObject<PKProxyFactory> *proxyFactory; // ivar: _proxyFactory


+(id)defaultManager;
+(id)managerForUser:(unsigned int)arg0 ;
-(BOOL)releaseHold:(id)arg0 flags:(NSUInteger)arg1 withError:(*id)arg2 ;
-(BOOL)releaseHold:(id)arg0 withError:(*id)arg1 ;
-(BOOL)terminatePlugInAtURL:(id)arg0 withError:(*id)arg1 ;
-(id)containingAppForExtensionProperties:(id)arg0 ;
-(id)containingAppForPlugInConnectedTo:(id)arg0 ;
-(id)containingAppForPlugInWithPid:(int)arg0 ;
-(id)forceHoldPlugIn:(id)arg0 withError:(*id)arg1 ;
-(id)holdPlugInsInApplication:(id)arg0 withError:(*id)arg1 ;
-(id)holdPlugInsWithExtensionPointName:(id)arg0 error:(*id)arg1 ;
-(id)holdPlugInsWithExtensionPointName:(id)arg0 platforms:(id)arg1 terminate:(BOOL)arg2 error:(*id)arg3 ;
-(id)informationForPlugInWithPid:(int)arg0 ;
-(id)initForService:(char *)arg0 ;
-(id)initForUser:(unsigned int)arg0 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 proxyFactory:(id)arg1 ;
-(id)initWithProxyFactory:(id)arg0 ;
-(id)terminatePlugInsInApplication:(id)arg0 options:(NSInteger)arg1 withError:(*id)arg2 ;
-(void)forceHoldPlugIn:(id)arg0 result:(id)arg1 ;
-(void)holdPlugInsInApplication:(id)arg0 result:(id)arg1 ;
-(void)holdPlugInsWithExtensionPointName:(id)arg0 platforms:(id)arg1 terminate:(BOOL)arg2 result:(id)arg3 ;
-(void)holdPlugInsWithExtensionPointName:(id)arg0 result:(id)arg1 ;
-(void)holdRequest:(id)arg0 extensionPointName:(id)arg1 platforms:(id)arg2 flags:(NSUInteger)arg3 result:(id)arg4 ;
-(void)holdRequest:(id)arg0 flags:(NSUInteger)arg1 result:(id)arg2 ;
-(void)registerPlugInAtURL:(id)arg0 result:(id)arg1 ;
-(void)registerPlugInsInBundle:(id)arg0 result:(id)arg1 ;
-(void)releaseHold:(id)arg0 ;
-(void)releaseHold:(id)arg0 reply:(id)arg1 ;
-(void)terminatePlugInsInApplication:(id)arg0 options:(NSInteger)arg1 result:(id)arg2 ;
-(void)unregisterPlugInAtURL:(id)arg0 result:(id)arg1 ;
-(void)unregisterPlugInsInBundle:(id)arg0 result:(id)arg1 ;
-(void)updateExtensionStatesForPlugIns:(id)arg0 result:(id)arg1 ;


@end


#endif