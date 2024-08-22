// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGHISTORYSERVICECLIENT_H
#define BDSREADINGHISTORYSERVICECLIENT_H

@class NSHashTable;
@protocol BDSBookWidgetReadingHistoryProviding, BDSServiceProtocol;

#import <Foundation/Foundation.h>


@interface BDSReadingHistoryServiceClient : NSObject <BDSBookWidgetReadingHistoryProviding>

 {
    os_unfair_lock_s _accessLock;
}


@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<BDSServiceProtocol> *serviceProxy; // ivar: _serviceProxy


+(id)sharedServiceProxy;
+(void)clearDefaultsCachedDataWithCompletionHandler:(id)arg0 ;
-(id)allObservers;
-(id)init;
-(void)_handleModelDidChange:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)bookWidgetReadingHistoryStateInfoWithCompletionHandler:(id)arg0 ;
-(void)clearDataWithCompletionHandler:(id)arg0 ;
-(void)clearDefaultsCachedDataWithCompletionHandler:(id)arg0 ;
-(void)clearTodayWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleSyncFileChangeWithSyncVersionInfo:(id)arg0 completion:(id)arg1 ;
-(void)incrementWithDate:(id)arg0 by:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)readingHistoryModelSnapshotInfoWithCurrentTime:(id)arg0 completionHandler:(id)arg1 ;
-(void)readingHistoryStateInfoWithRangeStart:(id)arg0 rangeEnd:(id)arg1 currentTime:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif