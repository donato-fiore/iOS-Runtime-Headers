// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBMSTOREEVENT_H
#define ATXBMSTOREEVENT_H

@protocol ATXBMStoreEventProtocol;

#import <Foundation/Foundation.h>


@interface ATXBMStoreEvent : NSObject <ATXBMStoreEventProtocol>



@property (readonly, nonatomic) id *eventBody; // ivar: _eventBody
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 ;


@end


#endif