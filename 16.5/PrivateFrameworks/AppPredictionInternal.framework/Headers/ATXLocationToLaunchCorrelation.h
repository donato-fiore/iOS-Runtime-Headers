// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCATIONTOLAUNCHCORRELATION_H
#define ATXLOCATIONTOLAUNCHCORRELATION_H

@class _PASLock;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXLocationToLaunchCorrelation : NSObject <NSCopying, NSSecureCoding>

 {
    _PASLock *_lock;
}




+(BOOL)supportsSecureCoding;
+(CGFloat)_launchProbabilityForEvent:(id)arg0 atLocation:(id)arg1 correlationMatrix:(id)arg2 locationTotals:(id)arg3 ;
+(CGFloat)_totalLaunchesAtLocation:(id)arg0 locationTotals:(id)arg1 ;
+(CGFloat)_totalLaunchesForEvent:(id)arg0 atLocation:(id)arg1 correlationMatrix:(id)arg2 ;
-(CGFloat)launchProbabilityForEvent:(id)arg0 atLocation:(id)arg1 ;
-(CGFloat)launchProbabilityForEvent:(id)arg0 atLocationsWithProbabilities:(id)arg1 ;
-(CGFloat)totalLaunches;
-(CGFloat)totalLaunchesAtLocation:(id)arg0 ;
-(CGFloat)totalLaunchesForEvent:(id)arg0 atLocation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCorrelationMatrix:(id)arg0 locationTotals:(id)arg1 ;
-(void)addVisitForLocation:(id)arg0 event:(id)arg1 value:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif