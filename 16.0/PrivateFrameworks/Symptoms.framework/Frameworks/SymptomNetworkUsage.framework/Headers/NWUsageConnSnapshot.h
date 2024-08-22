// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWUSAGECONNSNAPSHOT_H
#define NWUSAGECONNSNAPSHOT_H

@class NSString, NSDate, NSUUID, NSData;


#import "NWUsageSnapshot.h"
#import "NWConnProperties.h"

@interface NWUsageConnSnapshot : NWUsageSnapshot {
    NSString *_processName;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    CGFloat _startTimeInterval;
    CGFloat _snapshotTimeInterval;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_cuuid;
    NSUUID *_puuid;
    NSUUID *_flowuuid;
    unsigned int _flags;
    nstat_msg_src_update_conn _nstat_update;
    *nstat_connection_descriptor _descriptor;
    NWConnProperties *_currentProperties;
    NWConnProperties *_ancestralProperties;
}


@property (readonly, nonatomic) NSData *ancestralParametersTLV;
@property (retain, nonatomic) NWConnProperties *ancestralProperties;
@property (readonly, nonatomic) CGFloat connDuration;
@property (readonly, nonatomic) NSUInteger connIdentifier;
@property (readonly, nonatomic) CGFloat connSnapshotTimeIntervalSince1970;
@property (readonly, nonatomic) CGFloat connSnapshotTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) NSDate *connSnapshotTimestamp;
@property (readonly, nonatomic) NSUInteger connStartContinuousTime;
@property (readonly, nonatomic) CGFloat connStartTimeIntervalSince1970;
@property (readonly, nonatomic) CGFloat connStartTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) NSDate *connStartTimestamp;
@property (retain, nonatomic) NWConnProperties *currentProperties;
@property (readonly, nonatomic) NSUUID *cuuid;
@property (readonly, nonatomic) NSUUID *flowuuid;
@property (readonly, nonatomic) BOOL hasNetAccess;
@property (readonly, nonatomic) NSData *parametersTLV;
@property (readonly, nonatomic) NSUUID *puuid;
@property (readonly, nonatomic) NSData *remoteAddress;
@property (readonly, nonatomic) unsigned short remotePort;


-(BOOL)isNonAppInitiated;
-(BOOL)isSilent;
-(BOOL)isTracker;
-(NSUInteger)eupid;
-(NSUInteger)eventFlags;
-(NSUInteger)sourceIdentifier;
-(NSUInteger)uniqueProcessID;
-(id)_connDescriptorDictionaryForm:(struct nstat_connection_descriptor *)arg0 ;
-(id)description;
-(id)descriptorDescription:(struct nstat_connection_descriptor *)arg0 ;
-(id)dictionaryForm;
-(id)domainAttributedBundleId;
-(id)domainName;
-(id)domainOwner;
-(id)domainTrackerContext;
-(id)euuid;
-(id)initWithConnUpdate:(struct nstat_msg_src_update_conn *)arg0 startTime:(CGFloat)arg1 flowFlags:(unsigned int)arg2 ;
-(id)processName;
-(id)provider;
-(id)snapshotType;
-(id)snapshotTypeLowerCase;
-(id)uuid;
-(int)epid;
-(int)processID;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;


@end


#endif