// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGEVENTPROXY_H
#define OSLOGEVENTPROXY_H

@class NSString, NSUUID, NSDate, NSTimeZone;
@protocol OSLogEventProvider;

#import <Foundation/Foundation.h>

#import "OSLogEventBacktrace.h"
#import "OSLogEventDecomposedMessage.h"

@interface OSLogEventProxy : NSObject <OSLogEventProvider>

 {
    ? _eint;
    *os_activity_map_s _aid_map;
    *? _event;
    NSUInteger _efv;
    *_os_timesync_db_s _tsdb;
    int _uuiddbfd;
    timezone _tz;
    BOOL _sensitive;
    BOOL _trackActivities;
    NSUInteger _thread;
    NSUInteger _retainCount;
    NSString *_processImagePath;
    NSString *_senderImagePath;
    OSLogEventBacktrace *_backtrace;
    NSString *_logMessage;
    BOOL _logMessageIsHidden;
    OSLogEventDecomposedMessage *_decomposedMessage;
}


@property (readonly, nonatomic) unsigned int _oversizeIdentifier;
@property (nonatomic) NSUInteger _timesyncRangeUUIDIndex; // ivar: _uuidi
@property (readonly, nonatomic) NSUInteger activityIdentifier;
@property (readonly, nonatomic) OSLogEventBacktrace *backtrace;
@property (readonly, nonatomic) NSUUID *bootUUID;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) NSUInteger continuousNanosecondsSinceBoot;
@property (readonly, nonatomic) NSUInteger creatorActivityIdentifier;
@property (readonly, nonatomic) NSUInteger creatorProcessUniqueIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) OSLogEventDecomposedMessage *decomposedMessage;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSUInteger logType;
@property (readonly, nonatomic) ? lossCount;
@property (readonly, nonatomic) NSUInteger lossEndMachContinuousTimestamp;
@property (readonly, nonatomic) *timeval lossEndUnixDate;
@property (readonly, nonatomic) *timezone lossEndUnixTimeZone;
@property (readonly, nonatomic) NSUInteger lossStartMachContinuousTimestamp;
@property (readonly, nonatomic) *timeval lossStartUnixDate;
@property (readonly, nonatomic) *timezone lossStartUnixTimeZone;
@property (readonly, nonatomic) NSUInteger machContinuousTimestamp;
@property (readonly, nonatomic) NSUInteger parentActivityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) unsigned int processIdentifierVersion;
@property (readonly, nonatomic) NSString *processImagePath;
@property (readonly, nonatomic) NSUUID *processImageUUID;
@property (readonly, nonatomic) char * processImageUUIDBytes;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) NSUInteger senderImageOffset;
@property (readonly, nonatomic) NSString *senderImagePath;
@property (readonly, nonatomic) NSUUID *senderImageUUID;
@property (readonly, nonatomic) char * senderImageUUIDBytes;
@property (readonly, nonatomic) NSUInteger signpostIdentifier;
@property (readonly, nonatomic) NSString *signpostName;
@property (readonly, nonatomic) NSUInteger signpostScope;
@property (readonly, nonatomic) NSUInteger signpostType;
@property (readonly, nonatomic) NSUInteger size;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSUInteger threadIdentifier;
@property (readonly, nonatomic) NSUInteger timeToLive;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSUInteger traceIdentifier;
@property (readonly, nonatomic) NSUInteger transitionActivityIdentifier;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) *timeval unixDate;
@property (readonly, nonatomic) *timezone unixTimeZone;


+(id)_make;
-(BOOL)_setLogEvent:(struct ? *)arg0 rangeUUIDIndex:(NSUInteger)arg1 machTimebase:(struct mach_timebase_info *)arg2 ;
-(BOOL)_shouldIncludeSensitive;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)description;
-(id)formatArguments;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)retain;
-(void)_assertBalanced;
-(void)_fillFromXPCEventObject:(id)arg0 ;
-(void)_setBuffer:(*void)arg0 size:(NSUInteger)arg1 privateBuffer:(*void)arg2 privateSize:(NSUInteger)arg3 ;
-(void)_setDoNotTrackActivites:(BOOL)arg0 ;
-(void)_setFallbackTimezone;
-(void)_setIncludeSensitive:(BOOL)arg0 ;
-(void)_setThreadCrumb;
-(void)_setTimesyncDatabase:(struct _os_timesync_db_s *)arg0 ;
-(void)_setUUIDDBFileDescriptor:(int)arg0 ;
-(void)_unmake;
-(void)release;


@end


#endif