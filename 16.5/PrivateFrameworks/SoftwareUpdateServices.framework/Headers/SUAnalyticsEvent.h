// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUANALYTICSEVENT_H
#define SUANALYTICSEVENT_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUAnalyticsEvent : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_mutableEventPayload;
    NSObject<OS_dispatch_queue> *_stateQueue;
}


@property (readonly, retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, retain, nonatomic) NSDictionary *eventPayload;
@property (retain, nonatomic) NSString *eventUUID; // ivar: _eventUUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventName:(id)arg0 ;
-(void)_queue_removeEventPayloadEntry:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeEventPayloadEntry:(id)arg0 ;


@end


#endif