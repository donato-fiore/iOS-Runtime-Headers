// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TAFILTERVISITS_H
#define TAFILTERVISITS_H


#import <Foundation/Foundation.h>


@interface TAFilterVisits : NSObject



+(BOOL)isReasonableSpeedOfTravelFrom:(id)arg0 to:(id)arg1 ;
+(BOOL)sensitiveVisitsTooCloseBetweenFromLOIType:(NSUInteger)arg0 toLOIType:(NSUInteger)arg1 distance:(CGFloat)arg2 settings:(id)arg3 ;
+(BOOL)shouldDetectWithStore:(id)arg0 settings:(id)arg1 ;
+(NSUInteger)identifyDetectionTypeWithStore:(id)arg0 settings:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg0 settings:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
+(id)getAddressSetInTAVisitSnapshot:(id)arg0 ;
+(id)getEntryAddressSetInTAVisitSnapshot:(id)arg0 usingSettings:(id)arg1 ;
+(id)getExitAddressSetInTAVisitSnapshot:(id)arg0 usingSettings:(id)arg1 ;
+(id)getIntersectionOfFirstSet:(id)arg0 andSecondSet:(id)arg1 ;
+(id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)arg0 toVisitSnapshot:(id)arg1 settings:(id)arg2 currentClockTime:(id)arg3 ;
+(id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)arg0 toVisitSnapshot:(id)arg1 settings:(id)arg2 currentClockTime:(id)arg3 skipFreshObservationCheck:(BOOL)arg4 ;


@end


#endif