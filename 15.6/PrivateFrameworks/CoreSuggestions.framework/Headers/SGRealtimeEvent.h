// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGREALTIMEEVENT_H
#define SGREALTIMEEVENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying, SGRealtimeSuggestion;

#import <Foundation/Foundation.h>

#import "SGEvent.h"

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SGEvent *event; // ivar: _event
@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHarvested; // ivar: _isHarvested
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)realtimeEventForCanceledEvent:(id)arg0 eventIdentifier:(id)arg1 ;
+(id)realtimeEventForCanceledEvent:(id)arg0 eventIdentifier:(id)arg1 harvested:(BOOL)arg2 ;
+(id)realtimeEventForDuplicateEvent:(id)arg0 eventIdentifier:(id)arg1 ;
+(id)realtimeEventForDuplicateEvent:(id)arg0 eventIdentifier:(id)arg1 harvested:(BOOL)arg2 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg0 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg0 harvested:(BOOL)arg1 ;
+(id)realtimeEventForNewEvent:(id)arg0 ;
+(id)realtimeEventForNewEvent:(id)arg0 harvested:(BOOL)arg1 ;
+(id)realtimeEventUpdateToEvent:(id)arg0 withNewValues:(id)arg1 ;
+(id)realtimeEventUpdateToEvent:(id)arg0 withNewValues:(id)arg1 harvested:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRealtimeEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(int)arg0 event:(id)arg1 eventIdentifier:(id)arg2 harvested:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif