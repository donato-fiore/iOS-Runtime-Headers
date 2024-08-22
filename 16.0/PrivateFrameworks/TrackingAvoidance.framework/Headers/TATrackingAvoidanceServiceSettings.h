// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TATRACKINGAVOIDANCESERVICESETTINGS_H
#define TATRACKINGAVOIDANCESERVICESETTINGS_H


#import <Foundation/Foundation.h>


@interface TATrackingAvoidanceServiceSettings : NSObject

@property (readonly, nonatomic) CGFloat classificationTimeInterval; // ivar: _classificationTimeInterval
@property (readonly, nonatomic) BOOL enableTAFilterGeneral; // ivar: _enableTAFilterGeneral
@property (readonly, nonatomic) BOOL enableTAFilterLeavingLOI; // ivar: _enableTAFilterLeavingLOI
@property (readonly, nonatomic) BOOL enableTAFilterSingleVisit; // ivar: _enableTAFilterSingleVisit
@property (readonly, nonatomic) BOOL enableTAFilterVisits; // ivar: _enableTAFilterVisits


-(id)initWithDefaults;
-(id)initWithEnableTAFilterGeneral:(BOOL)arg0 enableTAFilterVisits:(BOOL)arg1 enableTAFilterSingleVisit:(BOOL)arg2 enableTAFilterLeavingLOI:(BOOL)arg3 classificationTimeInterval:(CGFloat)arg4 ;
-(id)initWithEnableTAFilterGeneralOrDefault:(id)arg0 enableTAFilterVisitsOrDefault:(id)arg1 enableTAFilterSingleVisitOrDefault:(id)arg2 enableTAFilterLeavingLOIOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4 ;


@end


#endif