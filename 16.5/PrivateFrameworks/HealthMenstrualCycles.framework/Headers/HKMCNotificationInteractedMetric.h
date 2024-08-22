// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCNOTIFICATIONINTERACTEDMETRIC_H
#define HKMCNOTIFICATIONINTERACTEDMETRIC_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKMCNotificationInteractedMetric : NSObject

@property (retain, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload


+(id)eventName;
-(id)description;
-(id)initWithCategory:(id)arg0 action:(id)arg1 ;


@end


#endif