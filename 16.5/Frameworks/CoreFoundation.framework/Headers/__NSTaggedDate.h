// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSTAGGEDDATE_H
#define __NSTAGGEDDATE_H



#import "NSDate.h"

@interface __NSTaggedDate : NSDate



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(CGFloat)timeIntervalSinceReferenceDate;
-(id)initWithTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif