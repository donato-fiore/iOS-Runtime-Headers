// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCONFIGURATIONMANAGER_H
#define WLKCONFIGURATIONMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WLKServerConfigurationResponse.h"
#import "WLKSharedFileStorage.h"

@interface WLKConfigurationManager : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    WLKServerConfigurationResponse *_config;
    WLKSharedFileStorage *_fileCache;
}




+(id)sharedInstance;
-(id)_config;
-(id)_configuration;
-(id)_configurationWithOptions:(NSInteger)arg0 cachePolicy:(NSUInteger)arg1 queryParameters:(id)arg2 ;
-(id)_init;
-(id)_stringForCachePolicy:(NSUInteger)arg0 ;
-(id)_utsk;
-(id)init;
-(void)_handleLibraryDidChangeNotification:(id)arg0 ;
-(void)_invalidateCache;
-(void)_invalidateNetworkCache;
-(void)_setConfig:(id)arg0 ;
-(void)_setUtsk:(id)arg0 ;
-(void)fetchConfigurationWithCompletionHandler:(id)arg0 ;
-(void)fetchConfigurationWithOptions:(NSInteger)arg0 cachePolicy:(NSUInteger)arg1 queryParameters:(id)arg2 completion:(id)arg3 ;


@end


#endif