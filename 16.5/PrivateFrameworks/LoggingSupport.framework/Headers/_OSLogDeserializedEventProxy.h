// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSLOGDESERIALIZEDEVENTPROXY_H
#define _OSLOGDESERIALIZEDEVENTPROXY_H

@class NSDictionary;


#import "OSLogEventProxy.h"
#import "_OSLogEventSerializationMetadata.h"

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    BOOL _unixDateNeedsLookup;
    BOOL _unixTimeZoneNeedsLookup;
    timezone _unixTimeZone;
    timeval _unixDate;
    BOOL _lossStartUnixDateNeedsLookup;
    BOOL _lossStartUnixTimeZoneNeedsLookup;
    timeval _lossStartUnixDate;
    timezone _lossStartUnixTimeZone;
    BOOL _lossEndUnixDateNeedsLookup;
    BOOL _lossEndUnixTimeZoneNeedsLookup;
    timeval _lossEndUnixDate;
    timezone _lossEndUnixTimeZone;
    NSUInteger _type;
}


@property (retain, nonatomic) NSDictionary *curEventDictionary; // ivar: _curEventDictionary
@property (retain, nonatomic) _OSLogEventSerializationMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL needsTypeLookup; // ivar: _needsTypeLookup


-(NSUInteger)activityIdentifier;
-(NSUInteger)continuousNanosecondsSinceBoot;
-(NSUInteger)creatorActivityIdentifier;
-(NSUInteger)creatorProcessUniqueIdentifier;
-(NSUInteger)logType;
-(NSUInteger)lossEndMachContinuousTimestamp;
-(NSUInteger)lossStartMachContinuousTimestamp;
-(NSUInteger)machContinuousTimestamp;
-(NSUInteger)parentActivityIdentifier;
-(NSUInteger)senderImageOffset;
-(NSUInteger)signpostIdentifier;
-(NSUInteger)signpostScope;
-(NSUInteger)signpostType;
-(NSUInteger)size;
-(NSUInteger)threadIdentifier;
-(NSUInteger)timeToLive;
-(NSUInteger)traceIdentifier;
-(NSUInteger)transitionActivityIdentifier;
-(NSUInteger)type;
-(char *)processImageUUIDBytes;
-(char *)senderImageUUIDBytes;
-(id)_frameForDict:(id)arg0 ;
-(id)backtrace;
-(id)bootUUID;
-(id)category;
-(id)composedMessage;
-(id)date;
-(id)decomposedMessage;
-(id)formatString;
-(id)process;
-(id)processImagePath;
-(id)processImageUUID;
-(id)sender;
-(id)senderImagePath;
-(id)senderImageUUID;
-(id)signpostName;
-(id)subsystem;
-(id)timeZone;
-(int)processIdentifier;
-(struct ? )lossCount;
-(struct timeval *)lossEndUnixDate;
-(struct timeval *)lossStartUnixDate;
-(struct timeval *)unixDate;
-(struct timezone *)lossEndUnixTimeZone;
-(struct timezone *)lossStartUnixTimeZone;
-(struct timezone *)unixTimeZone;
-(void)_populate_timeval:(struct timeval *)arg0 withDict:(id)arg1 ;
-(void)_populate_timezone:(struct timezone *)arg0 withDict:(id)arg1 ;
-(void)_resetNeedsLookup;


@end


#endif