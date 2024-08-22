// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONDELIVERYEVENT_H
#define ATXNOTIFICATIONDELIVERYEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXNotificationDeliveryEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deliveryUI; // ivar: _deliveryUI
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *suggestionUUIDs; // ivar: _suggestionUUIDs
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXNotificationDeliveryEvent:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithDeliveryUI:(NSUInteger)arg0 suggestionUUIDs:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(id)serialize;


@end


#endif