// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOANALYZERREPORTMATCH_H
#define HMIVIDEOANALYZERREPORTMATCH_H

@class HMFObject, NSNumber;



@interface HMIVideoAnalyzerReportMatch : HMFObject

@property (readonly) NSNumber *prediction; // ivar: _prediction
@property (readonly) float score; // ivar: _score
@property (readonly) NSNumber *truth; // ivar: _truth


-(id)initWithTruth:(id)arg0 prediction:(id)arg1 score:(float)arg2 ;


@end


#endif