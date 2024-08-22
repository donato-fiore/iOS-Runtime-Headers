// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETDISTRIBUTIONEVENTTRACKER_H
#define PETDISTRIBUTIONEVENTTRACKER_H

@class NSString;


#import "PETEventTracker.h"

@interface PETDistributionEventTracker : PETEventTracker

@property (readonly, nonatomic) NSString *event; // ivar: _event


-(id)initWithFeatureId:(id)arg0 event:(id)arg1 registerProperties:(id)arg2 ;
-(id)initWithFeatureId:(id)arg0 event:(id)arg1 registerProperties:(id)arg2 propertySubsets:(id)arg3 ;
-(void)_logValue:(id)arg0 forEvent:(id)arg1 stringifiedProperties:(id)arg2 metaData:(id)arg3 ;
-(void)trackEventWithPropertyValues:(id)arg0 value:(CGFloat)arg1 ;


@end


#endif