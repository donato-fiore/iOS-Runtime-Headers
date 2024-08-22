// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSPLACEHOLDERTIMEZONE_H
#define __NSPLACEHOLDERTIMEZONE_H



#import "NSTimeZone.h"

@interface __NSPlaceholderTimeZone : NSTimeZone



-(BOOL)isDaylightSavingTimeForDate:(id)arg0 ;
-(CGFloat)daylightSavingTimeOffsetForDate:(id)arg0 ;
-(NSInteger)secondsFromGMTForDate:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)__initWithName:(id)arg0 cache:(BOOL)arg1 ;
-(id)__initWithName:(id)arg0 data:(id)arg1 secondsFromGMT:(int)arg2 cache:(BOOL)arg3 ;
-(id)abbreviationForDate:(id)arg0 ;
-(id)data;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 data:(id)arg1 ;
-(id)name;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif