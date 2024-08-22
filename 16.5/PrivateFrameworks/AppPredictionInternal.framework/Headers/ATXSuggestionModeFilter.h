// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTIONMODEFILTER_H
#define ATXSUGGESTIONMODEFILTER_H

@class _PASLock, ATXDNDModeConfigurationClient, BMBiomeScheduler, BPSSink;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXSuggestionModeFilter : NSObject {
    _PASLock *_lock;
    ATXDNDModeConfigurationClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}




+(id)_currentModeUUID;
+(id)sharedInstance;
-(BOOL)currentModeConfigurationAllowsSuggestion:(id)arg0 ;
-(id)init;
-(void)_updateConfigurationWithModeUUID:(id)arg0 notifyingObservers:(BOOL)arg1 ;
-(void)registerForModeChanges;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif