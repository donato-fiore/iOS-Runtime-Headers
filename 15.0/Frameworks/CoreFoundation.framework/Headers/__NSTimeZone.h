// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSTIMEZONE_H
#define __NSTIMEZONE_H



#import "NSTimeZone.h"

@interface __NSTimeZone : NSTimeZone {
    *__CFString _name;
    *__CFData _data;
    **void _ucal;
    _opaque_pthread_mutex_t _lock;
    int _secondsFromGMT;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(BOOL)isDaylightSavingTimeForDate:(id)arg0 ;
-(CGFloat)daylightSavingTimeOffsetForDate:(id)arg0 ;
-(NSInteger)secondsFromGMTForDate:(id)arg0 ;
-(id)abbreviationForDate:(id)arg0 ;
-(id)data;
-(id)localizedName:(NSInteger)arg0 locale:(id)arg1 ;
-(id)name;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg0 ;
-(void)dealloc;


@end


#endif