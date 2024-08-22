// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSTIPSASSETPREFETCHINGMANAGER_H
#define TPSTIPSASSETPREFETCHINGMANAGER_H

@class TPSTip, NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSTipsAssetPrefetchingManager : NSObject

@property (nonatomic) NSInteger assetUserInterface; // ivar: _assetUserInterface
@property (nonatomic, getter=isBookendCompactViewMode) BOOL bookendCompactViewMode; // ivar: _bookendCompactViewMode
@property (nonatomic, getter=isCompactViewMode) BOOL compactViewMode; // ivar: _compactViewMode
@property (copy, nonatomic) TPSTip *currentTip; // ivar: _currentTip
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSMutableArray *sessionItems; // ivar: _sessionItems


-(id)init;
-(void)addFetchOperationWithAssetConfiguration:(id)arg0 type:(NSInteger)arg1 operationName:(id)arg2 ;
-(void)appendAssetsOperationsForTip:(id)arg0 ;
-(void)cancel;
-(void)cancelFetch;
-(void)dealloc;
-(void)prefetchAssetsFromTip:(id)arg0 tips:(id)arg1 isCompactViewMode:(BOOL)arg2 isBookendCompactViewMode:(BOOL)arg3 assetUserInterface:(NSInteger)arg4 ;


@end


#endif