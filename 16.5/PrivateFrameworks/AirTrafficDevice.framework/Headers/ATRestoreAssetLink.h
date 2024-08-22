// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATRESTOREASSETLINK_H
#define ATRESTOREASSETLINK_H

@class MBManager, MBCellularAccess, NSMutableArray, NSArray, NSString;
@protocol MBManagerDelegate, ICEnvironmentMonitorObserver, ATAssetLink, OS_dispatch_queue, ATAssetLinkDelegate, ATRestoreAssetLinkDelegate;

#import <Foundation/Foundation.h>


@interface ATRestoreAssetLink : NSObject <MBManagerDelegate, ICEnvironmentMonitorObserver, ATAssetLink>

 {
    MBManager *_mbManager;
    int _restoreState;
    MBCellularAccess *_restoreCellularPolicy;
    NSMutableArray *_queuedAssets;
    NSMutableArray *_activeAssets;
    BOOL _isRestoring;
    BOOL _batchingIsSupported;
    BOOL _singleAssetMode;
    NSUInteger _batchSize;
    int _mbCellularAccessChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) NSArray *allowedDataClasses; // ivar: _allowedDataClasses
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATAssetLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (weak, nonatomic) NSObject<ATRestoreAssetLinkDelegate> *restoreDelegate; // ivar: _restoreDelegate
@property (readonly) Class superclass;


-(BOOL)canEnqueueAsset:(id)arg0 ;
-(BOOL)hasProperNetworkConditions;
-(BOOL)linkIsReady;
-(BOOL)open;
-(NSUInteger)maximumBatchSize;
-(NSUInteger)priority;
-(id)_currentCellularPolicy;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)init;
-(void)_processQueuedAssets;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)finishRestore;
-(void)manager:(id)arg0 didFailRestoreWithError:(id)arg1 ;
-(void)manager:(id)arg0 didUpdateProgress:(float)arg1 estimatedTimeRemaining:(NSUInteger)arg2 ;
-(void)managerDidCancelRestore:(id)arg0 ;
-(void)managerDidFinishRestore:(id)arg0 ;
-(void)managerDidLoseConnectionToService:(id)arg0 ;
-(void)prioritizeAsset:(id)arg0 ;
-(void)processRestoreFailureForAsset:(id)arg0 ;
-(void)restoreSessionActiveWithCompletion:(id)arg0 ;


@end


#endif