// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMTEXTINPUTSESSIONEVENT_H
#define BMTEXTINPUTSESSIONEVENT_H

@class NSString, NSDateInterval, NSDate;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMTextInputSessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger sessionType; // ivar: _sessionType
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithDateInterval:(id)arg0 bundleID:(id)arg1 sessionID:(id)arg2 sessionType:(NSUInteger)arg3 ;
-(id)initWithDateInterval:(id)arg0 bundleID:(id)arg1 sessionType:(NSUInteger)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif