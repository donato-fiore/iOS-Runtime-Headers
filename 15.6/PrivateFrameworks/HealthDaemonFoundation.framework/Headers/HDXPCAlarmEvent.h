// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDXPCALARMEVENT_H
#define HDXPCALARMEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface HDXPCAlarmEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) BOOL isUserVisible; // ivar: _isUserVisible
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)_eventWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithName:(id)arg0 fireDate:(id)arg1 isUserVisible:(BOOL)arg2 ;


@end


#endif