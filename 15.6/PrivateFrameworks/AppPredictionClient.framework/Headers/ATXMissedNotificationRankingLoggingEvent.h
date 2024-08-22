// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMISSEDNOTIFICATIONRANKINGLOGGINGEVENT_H
#define ATXMISSEDNOTIFICATIONRANKINGLOGGINGEVENT_H

@class NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData;

#import <Foundation/Foundation.h>

#import "ATXMissedNotificationRanking.h"

@interface ATXMissedNotificationRankingLoggingEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking; // ivar: _missedNotificationRanking
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMissedNotificationRanking:(id)arg0 eventType:(NSInteger)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)jsonRepresentation;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif