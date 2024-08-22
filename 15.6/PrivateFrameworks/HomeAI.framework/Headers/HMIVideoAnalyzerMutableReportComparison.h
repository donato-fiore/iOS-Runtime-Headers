// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANALYZERMUTABLEREPORTCOMPARISON_H
#define HMIVIDEOANALYZERMUTABLEREPORTCOMPARISON_H

@class HMFObject, NSArray;



@interface HMIVideoAnalyzerMutableReportComparison : HMFObject

@property (readonly) NSInteger falseNegative; // ivar: _falseNegative
@property (readonly) NSArray *falseNegativeKeys; // ivar: _falseNegativeKeys
@property (readonly) NSInteger falsePositive; // ivar: _falsePositive
@property (readonly) NSArray *falsePositiveKeys; // ivar: _falsePositiveKeys
@property (readonly) float precision; // ivar: _precision
@property (readonly) float recall; // ivar: _recall
@property (readonly) NSInteger truePositive; // ivar: _truePositive
@property (readonly) NSArray *truePositiveKeys; // ivar: _truePositiveKeys


-(id)attributeDescriptions;
-(id)description;
-(id)initWithTruePositiveKeys:(id)arg0 falseNegativeKeys:(id)arg1 falsePositiveKeys:(id)arg2 groupByKey:(BOOL)arg3 ;


@end


#endif