// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLASSETMANAGERCOORDINATOR_H
#define APODMLASSETMANAGERCOORDINATOR_H

@class NSMutableDictionary, NSOperationQueue, TRIClient;

#import <Foundation/Foundation.h>

#import "APOdmlUnfairLock.h"

@interface APOdmlAssetManagerCoordinator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *assetManagers; // ivar: _assetManagers
@property (retain, nonatomic) NSObject *refreshClientNotificationObserver; // ivar: _refreshClientNotificationObserver
@property (retain, nonatomic) NSOperationQueue *refreshClientQueue; // ivar: _refreshClientQueue
@property (readonly, nonatomic) APOdmlUnfairLock *refreshTrialLock; // ivar: _refreshTrialLock
@property BOOL respondToRefreshNotification; // ivar: _respondToRefreshNotification
@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient


+(id)sharedAssetManagerCoordinator;
-(id)assetManagerForPlacementType:(NSUInteger)arg0 assetManagerType:(NSUInteger)arg1 ;
-(id)init;
-(void)initializeAssetManagersforPlacementTypes:(id)arg0 ;
-(void)refreshTrialClientForPlacementTypes:(id)arg0 ;
-(void)setUpdateHandlerForNamespace:(id)arg0 ;


@end


#endif