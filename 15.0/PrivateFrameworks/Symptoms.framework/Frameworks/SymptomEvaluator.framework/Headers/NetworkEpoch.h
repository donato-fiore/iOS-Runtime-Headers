// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETWORKEPOCH_H
#define NETWORKEPOCH_H

@class NSDate, NSString, AnalyticsWorkspace, NetworkAttachmentAnalytics, NSMutableDictionary, NSManagedObjectID, NSDictionary, SFLiveRoutePerf, SFNetworkAttachment, NSMutableSet, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "StopWatch.h"

@interface NetworkEpoch : NSObject <NSCopying>

 {
    NSDate *createdAt;
    NSString *identifier;
    BOOL fromRoamingEvent;
    AnalyticsWorkspace *workspace;
    NetworkAttachmentAnalytics *naspace;
    NSMutableDictionary *tickers;
    NSManagedObjectID *currentLiveRoutePerfObjectID;
    CGFloat lastBytesDelta;
    NSDate *lastBytesPartialUpdate;
    BOOL isSnapshot;
    NSDictionary *scores;
    BOOL isLowLqm;
    BOOL isLowq;
    BOOL isFaulty;
    BOOL isKnownGood;
}


@property (readonly) BOOL active; // ivar: _active
@property int bars; // ivar: _bars
@property (readonly, nonatomic) SFLiveRoutePerf *currentLiveRoutePerf;
@property (nonatomic) *__NStatSource defRoute4; // ivar: _defRoute4
@property (nonatomic) *__NStatSource defRoute6; // ivar: _defRoute6
@property (nonatomic) BOOL deleteNetworkAttachmentsWhenDone; // ivar: _deleteNetworkAttachmentsWhenDone
@property (readonly, nonatomic) SFNetworkAttachment *durable; // ivar: _durable
@property (retain, nonatomic) StopWatch *fatal; // ivar: _fatal
@property (retain, nonatomic) NSMutableSet *hasDNS; // ivar: _hasDNS
@property (retain, nonatomic) NSMutableSet *hasGW; // ivar: _hasGW
@property (nonatomic) BOOL hasInternetDNS; // ivar: _hasInternetDNS
@property (retain, nonatomic) NSMutableSet *impDNS; // ivar: _impDNS
@property (readonly, nonatomic) CGFloat initialRttAvg; // ivar: _initialRttAvg
@property (readonly, nonatomic) CGFloat initialRttVar; // ivar: _initialRttVar
@property (readonly) NSString *interfaceName; // ivar: _interfaceName
@property BOOL knownGoodNotified; // ivar: _knownGoodNotified
@property (retain, nonatomic) NSDate *lastCountedDown; // ivar: _lastCountedDown
@property (nonatomic) NSInteger loi; // ivar: _loi
@property (retain, nonatomic) StopWatch *lowLqm; // ivar: _lowLqm
@property (retain, nonatomic) StopWatch *lowq; // ivar: _lowq
@property CGFloat lqmTransitions; // ivar: _lqmTransitions
@property (readonly) BOOL oncell; // ivar: _oncell
@property (retain, nonatomic) StopWatch *overall; // ivar: _overall
@property (retain, nonatomic) SFLiveRoutePerf *partial; // ivar: _partial
@property (retain, nonatomic) SFLiveRoutePerf *partial4; // ivar: _partial4
@property (retain, nonatomic) SFLiveRoutePerf *partial6; // ivar: _partial6
@property (readonly) NSString *primaryKey;
@property (readonly) unsigned int seqno; // ivar: _seqno
@property (nonatomic) BOOL supportsIPv4; // ivar: _supportsIPv4
@property (nonatomic) BOOL supportsIPv6; // ivar: _supportsIPv6
@property (nonatomic) CGFloat topDownlRate; // ivar: _topDownlRate
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)parsePrimaryKey:(id)arg0 majorID:(*id)arg1 minorID:(*id)arg2 ;
+(BOOL)parsePrimaryKeyStr:(char *)arg0 majorIDLengthInBytes:(*int)arg1 minorIDLengthInBytes:(*int)arg2 ;
+(BOOL)pruneDataOlderThan:(id)arg0 exceptFor:(id)arg1 inWorkspace:(id)arg2 ;
+(NSUInteger)coalescingFactor;
+(id)epochWithPrimaryKey:(id)arg0 interfaceName:(id)arg1 isCell:(BOOL)arg2 maxBars:(int)arg3 roamingEvent:(BOOL)arg4 roamingAttrs:(NSInteger)arg5 supportsIPv4:(BOOL)arg6 supportsIPv6:(BOOL)arg7 inWorkspace:(id)arg8 andQueue:(id)arg9 ;
+(id)snapshotsIn:(id)arg0 olderThan:(id)arg1 ;
+(void)resetDataFor:(id)arg0 exceptFor:(id)arg1 inWorkspace:(id)arg2 ;
+(void)resetDataForSSIDs:(id)arg0 exceptFor:(id)arg1 inWorkspace:(id)arg2 ;
-(BOOL)_isLiveRoutePerfinScope:(id)arg0 forTime:(id)arg1 ;
-(BOOL)countDownStop:(id)arg0 eventTimeStamp:(id)arg1 ;
// -(BOOL)createCountDown:(id)arg0 atTime:(id)arg1 nextTick:(NSUInteger)arg2 ticksTotal:(NSUInteger)arg3 onQueue:(id)arg4 withIterationBlock:(id)arg5 completionBlock:(unk)arg6  ;
-(BOOL)hasCountDownActive:(id)arg0 ;
-(BOOL)hasTypicalShortStay;
-(BOOL)matchesLOI:(NSInteger)arg0 ;
-(NSInteger)RTLocationOfInterestTypeForExtended:(NSInteger)arg0 ;
-(NSInteger)getMatchingRTLocationOfInterestType;
-(id)_createCellSignature;
-(id)_init;
-(id)_initWithPrimaryKey:(id)arg0 interfaceName:(id)arg1 isCell:(BOOL)arg2 maxBars:(int)arg3 roamingEvent:(BOOL)arg4 roamingAttrs:(NSInteger)arg5 supportsIPv4:(BOOL)arg6 supportsIPv6:(BOOL)arg7 inWorkspace:(id)arg8 andQueue:(id)arg9 ;
-(id)_networkAttachmentDurableState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)establishPartials:(id)arg0 withFlag:(BOOL)arg1 ;
-(id)mapLOIToString;
-(int)compareToSnapshot:(id)arg0 ;
-(void)_retrieveLOIAttrsOnQueue:(id)arg0 roamingEvent:(BOOL)arg1 roamingAttrs:(NSInteger)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)refreshLOIOnQueue:(id)arg0 reply:(id)arg1 ;
-(void)reportAdminDisable;
-(void)reportCaptivityRedirect;
-(void)reportCertError;
-(void)reportDataStall;
-(void)retire;
-(void)unloadDurableState;
-(void)updateMetrics:(id)arg0 source:(struct __NStatSource *)arg1 wasProgress:(id)arg2 ;


@end


#endif