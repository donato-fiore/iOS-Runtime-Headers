// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BDSLIVERPOOLSTATUSMONITOR_H
#define BDSLIVERPOOLSTATUSMONITOR_H

@class BCICloudIdentityToken, NSHashTable;
@protocol OS_dispatch_queue, BDSLiverpoolStatusChangeObserving;

#import <Foundation/Foundation.h>

#import "BDSICloudIdentityToken.h"

@interface BDSLiverpoolStatusMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue; // ivar: _containerQueue
@property (weak, nonatomic) NSObject<BDSLiverpoolStatusChangeObserving> *coordinatingObserver; // ivar: _coordinatingObserver
@property (copy, nonatomic) BDSICloudIdentityToken *currentICloudIdentityToken; // ivar: _currentICloudIdentityToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, copy, nonatomic) BCICloudIdentityToken *iCloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedICloudIdentityToken; // ivar: _lastArchivedICloudIdentityToken
@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken; // ivar: _lastArchivedNonNilICloudIdentityToken
@property (nonatomic) BOOL lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch; // ivar: _lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL optedIn; // ivar: _optedIn
@property (nonatomic) BOOL optedInKnown; // ivar: _optedInKnown
@property (nonatomic) int tccNotifyToken; // ivar: _tccNotifyToken
@property (readonly, nonatomic) BOOL userIdentityPreviouslyRecordedOnThisDevice;


+(id)makeOSStateHandler;
-(BOOL)dq_isCloudKitEnabled;
-(BOOL)isCloudKitEnabled;
-(id)description;
-(id)init;
-(void)_notifyObserversWithCurrentToken:(id)arg0 lastToken:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)dq_archiveCurrentICloudIdentityToken;
-(void)dq_refreshICloudAvailabilityStatus;
-(void)p_iCloudIdentityDidChange:(id)arg0 ;
-(void)refreshICloudTokensAndUpdateWithOptedIn:(BOOL)arg0 ;
-(void)registerCoordinatingObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)restartObserving;
-(void)updateWithOptedIn:(BOOL)arg0 ;


@end


#endif