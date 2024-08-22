// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFXPCALARMEVENT_H
#define EFXPCALARMEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface EFXPCAlarmEvent : NSObject

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