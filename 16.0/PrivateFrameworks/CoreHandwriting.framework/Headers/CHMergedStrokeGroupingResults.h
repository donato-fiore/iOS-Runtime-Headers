// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHMERGEDSTROKEGROUPINGRESULTS_H
#define CHMERGEDSTROKEGROUPINGRESULTS_H

@class NSDictionary;


#import "CHStrokeGroupingResult.h"

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult

@property (readonly, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier; // ivar: _groupingResultsByStrategyIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeGroups:(id)arg0 createdStrokeGroups:(id)arg1 deletedStrokeGroups:(id)arg2 groupingResultsByStrategyIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif