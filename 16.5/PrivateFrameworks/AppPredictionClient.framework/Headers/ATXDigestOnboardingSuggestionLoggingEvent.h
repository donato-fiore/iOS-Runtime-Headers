// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIGESTONBOARDINGSUGGESTIONLOGGINGEVENT_H
#define ATXDIGESTONBOARDINGSUGGESTIONLOGGINGEVENT_H

@class NSString, NSUUID;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingSuggestionLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int outcome; // ivar: _outcome
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeToResolution; // ivar: _timeToResolution


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 outcome:(int)arg1 timeToResolution:(CGFloat)arg2 ;
-(id)proto;
-(id)serialize;


@end


#endif