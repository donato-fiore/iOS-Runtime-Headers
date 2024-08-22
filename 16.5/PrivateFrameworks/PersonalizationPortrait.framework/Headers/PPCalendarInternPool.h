// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCALENDARINTERNPOOL_H
#define PPCALENDARINTERNPOOL_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}




-(id)init;
-(id)internedCalendarWithEKCalendar:(id)arg0 ;
-(void)clearPool;


@end


#endif