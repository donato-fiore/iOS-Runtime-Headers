// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWUSAGESNAPSHOT_H
#define NWUSAGESNAPSHOT_H

@class NSDictionary, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface NWUsageSnapshot : NSObject {
    unsigned int _flags;
    nstat_msg_src_update_convenient _nstat_update;
    NSDictionary *_extensionDictionaries;
}


@property (retain, nonatomic) NSString *attributedEntity; // ivar: _attributedEntity
@property (readonly, nonatomic) BOOL attributedEntityIsBundleName;
@property (readonly, nonatomic) BOOL attributedEntityIsProcessName;
@property (nonatomic) int attributionReason; // ivar: _attributionReason
@property (readonly, nonatomic) NSString *attributionReasonString;
@property (retain, nonatomic) NSString *delegateName; // ivar: _delegateName
@property (retain, nonatomic) NSString *domainAttributedBundleId; // ivar: _domainAttributedBundleId
@property (retain, nonatomic) NSString *domainName; // ivar: _domainName
@property (retain, nonatomic) NSString *domainOwner; // ivar: _domainOwner
@property (retain, nonatomic) NSString *domainTrackerContext; // ivar: _domainTrackerContext
@property (readonly, nonatomic) int epid; // ivar: _epid
@property (readonly, nonatomic) NSUInteger eupid; // ivar: _eupid
@property (readonly, nonatomic) NSUUID *euuid; // ivar: _euuid
@property (readonly, nonatomic) NSUInteger eventFlags;
@property (retain, nonatomic) NSDictionary *extensions; // ivar: _extensions
@property (nonatomic) BOOL firstOccurrence; // ivar: _firstOccurrence
@property (nonatomic) BOOL isADaemon; // ivar: _isADaemon
@property (nonatomic) BOOL isNonAppInitiated; // ivar: _isNonAppInitiated
@property (nonatomic) BOOL isSilent; // ivar: _isSilent
@property (nonatomic) BOOL isTracker; // ivar: _isTracker
@property (readonly, nonatomic) BOOL lastOccurrence;
@property (retain, nonatomic) NSDictionary *lookupResults; // ivar: _lookupResults
@property (readonly, nonatomic) int processID; // ivar: _processID
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) BOOL snapshotAppStateIsForeground; // ivar: _snapshotAppStateIsForeground
@property (nonatomic) int snapshotReason; // ivar: _snapshotReason
@property (readonly, nonatomic) NSString *snapshotReasonString;
@property (nonatomic) BOOL snapshotScreenStateOn; // ivar: _snapshotScreenStateOn
@property (readonly, nonatomic) NSString *snapshotType; // ivar: _snapshotType
@property (readonly, nonatomic) NSString *snapshotTypeLowerCase; // ivar: _snapshotTypeLowerCase
@property (readonly, nonatomic) NSUInteger sourceIdentifier;
@property (nonatomic) BOOL startAppStateIsForeground; // ivar: _startAppStateIsForeground
@property (nonatomic) BOOL startScreenStateOn; // ivar: _startScreenStateOn
@property (readonly, nonatomic) NSUInteger uniqueProcessID; // ivar: _uniqueProcessID
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(CGFloat)_intervalWithContinuousTime:(NSUInteger)arg0 ;
+(CGFloat)_referenceIntervalWithContinuousTime:(NSUInteger)arg0 ;
+(id)_dateWithContinuousTime:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)changedEUUID;
-(BOOL)changedEUUIDFromUUID;
-(BOOL)changedEpid;
-(BOOL)changedOwnership;
-(BOOL)changedPid;
-(BOOL)changedProcname;
-(BOOL)changedUUID;
-(id)_createNSUUIDForBytes:(unsigned char)arg0 ;
-(id)extensionDictionaries;
-(struct nstat_msg_src_update_convenient *)_update_ptr;
-(void)setAppStateIsForeground:(BOOL)arg0 screenStateOn:(BOOL)arg1 startAppStateIsForeground:(BOOL)arg2 startScreenStateOn:(BOOL)arg3 ;
-(void)setAttribution:(id)arg0 derivation:(int)arg1 delegateName:(id)arg2 isADaemon:(BOOL)arg3 ;


@end


#endif