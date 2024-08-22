// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWACTIVITYSUPERMETRIC_H
#define NWACTIVITYSUPERMETRIC_H

@class NWActivityStatistics, NWActivityEpilogueStatistics, NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface NWActivitySuperMetric : NSObject

@property (retain, nonatomic) NWActivityStatistics *activity; // ivar: _activity
@property (retain, nonatomic) NWActivityEpilogueStatistics *activityEpilogue; // ivar: _activityEpilogue
@property (retain, nonatomic) NSMutableArray *cellularFragments; // ivar: _cellularFragments
@property (retain, nonatomic) NSMutableArray *clientFragments; // ivar: _clientFragments
@property (retain, nonatomic) NSMutableArray *connectionReports; // ivar: _connectionReports
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSMutableArray *taskMetrics; // ivar: _taskMetrics
@property (retain, nonatomic) NSMutableArray *wifiFragments; // ivar: _wifiFragments


+(unsigned int)limitForFragmentType:(int)arg0 ;
+(void)flattenObject:(id)arg0 intoDictionary:(id)arg1 atPath:(id)arg2 ;
-(id)description;
-(id)init;


@end


#endif