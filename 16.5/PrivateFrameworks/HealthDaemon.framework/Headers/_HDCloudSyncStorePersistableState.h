// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDCLOUDSYNCSTOREPERSISTABLESTATE_H
#define _HDCLOUDSYNCSTOREPERSISTABLESTATE_H

@class NSString, NSDictionary, NSDate, CKServerChangeToken;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger baselineEpoch; // ivar: _baselineEpoch
@property (readonly, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) NSDictionary *emptyZoneDateByZoneID; // ivar: _emptyZoneDateByZoneID
@property (readonly, nonatomic) BOOL hasEncounteredGapInCurrentEpoch; // ivar: _hasEncounteredGapInCurrentEpoch
@property (readonly, nonatomic) NSDate *lastCheckDate; // ivar: _lastCheckDate
@property (readonly, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (readonly, nonatomic) NSString *ownerIdentifier; // ivar: _ownerIdentifier
@property (readonly, nonatomic) NSDate *rebaseDeadline; // ivar: _rebaseDeadline
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (readonly, nonatomic) int syncProtocolVersion; // ivar: _syncProtocolVersion


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithServerChangeToken:(id)arg0 baselineEpoch:(NSUInteger)arg1 rebaseDeadline:(id)arg2 lastSyncDate:(id)arg3 emptyZones:(id)arg4 lastCheckDate:(id)arg5 ownerIdentifier:(id)arg6 containerIdentifier:(id)arg7 syncProtocolVersion:(int)arg8 ;
-(id)stateByRecordingLastCheckDate:(id)arg0 ;
-(id)stateByRecordingLastSyncDate:(id)arg0 ;
-(id)stateByRequiringUrgentRebase;
-(id)stateByResettingRebaselineDeadline;
-(id)stateWithBaselineEpoch:(NSUInteger)arg0 ;
-(id)stateWithEmptyZones:(id)arg0 ;
-(id)stateWithGapEncountered:(BOOL)arg0 ;
-(id)stateWithServerChangeToken:(id)arg0 ;
-(id)stateWithSyncProtocolVersion:(int)arg0 ;


@end


#endif