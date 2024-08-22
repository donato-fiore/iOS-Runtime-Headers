// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSDATE_H
#define __NSDATE_H



#import "NSDate.h"

@interface __NSDate : NSDate {
    CGFloat _time;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(CGFloat)timeIntervalSinceReferenceDate;
-(id)initWithTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif