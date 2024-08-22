// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXERMEVENT_H
#define ATXERMEVENT_H

@class NSArray, NSString, NSDate;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXEngagementRecordEntry.h"

@interface ATXERMEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSArray *clientModelIds; // ivar: _clientModelIds
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ATXEngagementRecordEntry *entry; // ivar: _entry
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXERMEvent:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithEventDate:(id)arg0 eventType:(NSUInteger)arg1 recordEntry:(id)arg2 clientModelIds:(id)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif