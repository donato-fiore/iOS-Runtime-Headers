// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCLIENTMODELSUGGESTIONRECEIVER_H
#define ATXCLIENTMODELSUGGESTIONRECEIVER_H

@class ATXClientModelCacheManager, _PASSimpleCoalescingTimer, UNUserNotificationCenter, ATXUniversalBlendingLayerServer, NSString;
@protocol UNUserNotificationCenterDelegate, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerServerDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXClientModelSuggestionRouter.h"
#import "ATXAppDirectoryOrderingProvider.h"
#import "ATXHomeScreenSuggestionSender.h"
#import "ATXLockscreenSuggestionSender.h"
#import "_ATXInternalUninstallNotification.h"

@interface ATXClientModelSuggestionReceiver : NSObject <UNUserNotificationCenterDelegate, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerServerDelegateProtocol>

 {
    ATXClientModelSuggestionRouter *_router;
    ATXAppDirectoryOrderingProvider *_appDirectoryOrderingProvider;
    ATXHomeScreenSuggestionSender *_homeScreenSuggestionSender;
    ATXLockscreenSuggestionSender *_lockscreenSuggestionSender;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    ATXClientModelCacheManager *_clientModelCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _homeScreenStackChangeDarwinNotificationObserver;
    UNUserNotificationCenter *_notificationCenter;
}


@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer; // ivar: _blendingLayerServer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)layoutSelectorsForConsumerSubTypes;
+(id)sharedInstance;
+(void)_updateCacheForClientModel:(id)arg0 withSuggestions:(id)arg1 cacheManager:(id)arg2 ;
+(void)clearPreviouslyPersistedCachesForCardSuggestionClientsIfNecessary;
-(BOOL)rerouteSuggestions:(id)arg0 clientModelId:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(id)initWithBlendingLayerServer:(id)arg0 ;
-(void)_sendStackChangeDebugNotification:(id)arg0 ;
-(void)blendingLayerUpdatedUICache:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(void)dealloc;
-(void)routeSuggestionsToInfoSuggestionEngine:(id)arg0 clientModelId:(id)arg1 completion:(id)arg2 ;
-(void)start;


@end


#endif