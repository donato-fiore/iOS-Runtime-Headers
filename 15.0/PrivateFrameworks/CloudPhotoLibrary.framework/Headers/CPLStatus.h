// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLSTATUS_H
#define CPLSTATUS_H

@class NSMutableSet, NSURL, NSMutableDictionary, Protocol, NSData, NSDictionary, NSDate, NSArray;
@protocol OS_dispatch_queue, CPLStatusDelegate;

#import <Foundation/Foundation.h>

#import "CPLAccountFlags.h"

@interface CPLStatus : NSObject {
    BOOL _forCPL;
    NSMutableSet *_changedKeys;
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
    Protocol *_delegationProtocol;
    SEL _delegationSelector;
}


@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (readonly, nonatomic, getter=isCellularRestricted) BOOL cellularRestricted;
@property (readonly, nonatomic) NSDictionary *cloudAssetCountPerType;
@property (readonly, nonatomic) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (readonly, nonatomic, getter=isConnectedToNetwork) BOOL connectedToNetwork;
@property (nonatomic) BOOL containerHasBeenWiped;
@property (weak, nonatomic) NSObject<CPLStatusDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *disabledFeatures;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (readonly, nonatomic) BOOL hasBatteryBudget;
@property (readonly, nonatomic) BOOL hasCellularBudget;
@property (nonatomic) BOOL hasChangesToProcess;
@property (readonly, nonatomic) BOOL hasValidSystemBudget;
@property (nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (readonly, nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode;
@property (copy, nonatomic) NSDate *initialSyncDate;
@property (readonly, nonatomic) BOOL isBlockedByLowPowerMode;
@property (readonly, nonatomic) BOOL isConstrainedNetwork;
@property (nonatomic) BOOL isExceedingQuota;
@property (copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property (copy, nonatomic) NSDate *lastPruneDate;
@property (copy, nonatomic) NSDate *lastSuccessfulSyncDate;
@property (nonatomic) BOOL lowDiskSpace;


-(BOOL)_deleteInitialSyncMarkerWithError:(*id)arg0 ;
-(BOOL)_writeInitialSyncMarkerForDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeInitialSyncMarker:(*id)arg0 ;
-(id)initWithClientLibraryBaseURL:(id)arg0 ;
-(id)initWithClientLibraryBaseURLForCPLEngine:(id)arg0 ;
-(id)statusDescription;
-(void)_loadIfNecessary;
-(void)_save;
-(void)_setObjectInStatus:(id)arg0 forKey:(id)arg1 ;
-(void)_statusDidChange;
-(void)checkInitialSyncMarker;
-(void)preventDelegateWithDelegationClass:(id)arg0 selector:(SEL)arg1 ;
-(void)refetchFromDisk;


@end


#endif