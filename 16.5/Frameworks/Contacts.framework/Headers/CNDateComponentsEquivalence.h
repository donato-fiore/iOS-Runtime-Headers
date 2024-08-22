// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDATECOMPONENTSEQUIVALENCE_H
#define CNDATECOMPONENTSEQUIVALENCE_H


#import <Foundation/Foundation.h>


@interface CNDateComponentsEquivalence : NSObject



+(BOOL)canUnifyComponents:(id)arg0 withComponents:(id)arg1 ;
+(BOOL)isCalendar:(id)arg0 equivalentToCalendar:(id)arg1 ;
+(BOOL)isComponent:(NSInteger)arg0 equivalentToComponent:(NSInteger)arg1 ;


@end


#endif