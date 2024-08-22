// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSSESSIONMANAGER_H
#define CPSSESSIONMANAGER_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source, CPSAppInfoFetching, CPSBusinessItemFetching, CPSLegacyAppInstalling;

#import <Foundation/Foundation.h>

#import "CPSInstallationController.h"

@interface CPSSessionManager : NSObject {
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}


@property (readonly, nonatomic) NSArray *allSessions;
@property (readonly, nonatomic) NSObject<CPSAppInfoFetching> *appInfoFetcher; // ivar: _appInfoFetcher
@property (readonly, nonatomic) NSObject<CPSBusinessItemFetching> *businessItemFetcher; // ivar: _businessItemFetcher
@property (readonly, nonatomic) CPSInstallationController *clipInstaller; // ivar: _clipInstaller
@property (retain, nonatomic) NSObject<CPSLegacyAppInstalling> *legacyInstaller; // ivar: _legacyInstaller


+(id)sharedManager;
-(id)init;
-(id)sessionWithURL:(id)arg0 createIfNoExist:(BOOL)arg1 ;
-(void)_handleMemoryPressure:(NSUInteger)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_setUpMemoryPressureHandler;
-(void)clearSessionWithURL:(id)arg0 ;
-(void)getSessionWithURL:(id)arg0 completion:(id)arg1 ;
-(void)getSessionWithURL:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)handleManagedConfigurationChanged;


@end


#endif