// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKAVAILABILITYUTILITIES_H
#define EKAVAILABILITYUTILITIES_H


#import <Foundation/Foundation.h>


@interface EKAvailabilityUtilities : NSObject



+(BOOL)showTypeAsBusy:(NSInteger)arg0 ;
+(BOOL)spansIncludeBusyPeriod:(id)arg0 ;
+(NSInteger)_orderForType:(NSInteger)arg0 ;
+(NSInteger)summarizedAvailabilityTypeForSpans:(id)arg0 ;
+(id)getCALFreeBusyFromEKSpans:(id)arg0 inRange:(id)arg1 ;
+(id)getCALFreeBusyFromResults:(id)arg0 forAttendees:(id)arg1 inRange:(id)arg2 ;
+(int)CALFreeBusyTypeFromEKAvailType:(NSInteger)arg0 ;
+(int)leastAvailabileFreeBusyTypeForArray:(id)arg0 ;


@end


#endif