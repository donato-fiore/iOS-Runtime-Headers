// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSTROKEFASTGROUPINGRESULT_H
#define CHSTROKEFASTGROUPINGRESULT_H



#import "CHStrokeGroupingResult.h"

@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult {
    ? _fastGroupingClusters;
}


@property ? fastGroupingClusters;


+(id)_strokeGroupFromFastGroupingCluster:(*void)arg0 strokeProvider:(id)arg1 strategyIdentifier:(id)arg2 ;
+(id)_strokeGroupFromSortedStrokeIdentifiers:(id)arg0 strokeProvider:(id)arg1 strategyIdentifier:(id)arg2 ;
+(id)_strokeGroupsFromFastGroupingClusters:(*void)arg0 clusteredStrokes:(id)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3 clutterFilter:(id)arg4 ;
-(id)initWithFastGroupingClusters:(*void)arg0 clusteredStrokes:(id)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3 clutterFilter:(id)arg4 ;


@end


#endif