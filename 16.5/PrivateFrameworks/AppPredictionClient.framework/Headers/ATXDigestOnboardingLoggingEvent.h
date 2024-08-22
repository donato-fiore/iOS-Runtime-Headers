// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIGESTONBOARDINGLOGGINGEVENT_H
#define ATXDIGESTONBOARDINGLOGGINGEVENT_H

@class NSString, NSArray, NSUUID;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *deliveryTimes; // ivar: _deliveryTimes
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didSelectShowMore; // ivar: _didSelectShowMore
@property (readonly, nonatomic) int digestOnboardingOutcome; // ivar: _digestOnboardingOutcome
@property (readonly, nonatomic) int entrySource; // ivar: _entrySource
@property (readonly, nonatomic) int finalUIShown; // ivar: _finalUIShown
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeTaken; // ivar: _timeTaken


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 entrySource:(int)arg1 digestOnboardingOutcome:(int)arg2 finalUIShown:(int)arg3 didSelectShowMore:(BOOL)arg4 timeTaken:(CGFloat)arg5 deliveryTimes:(id)arg6 ;
-(id)proto;
-(id)serialize;


@end


#endif