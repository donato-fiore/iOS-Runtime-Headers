// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERREPORTRECORD_H
#define HMIVIDEOANALYZERREPORTRECORD_H

@class HMFObject, NSArray, NSString;



@interface HMIVideoAnalyzerReportRecord : HMFObject

@property (readonly) NSUInteger count; // ivar: _count
@property (readonly) NSArray *frameResultIndices; // ivar: _frameResultIndices
@property (readonly) NSString *key; // ivar: _key
@property (readonly) float score; // ivar: _score


-(id)initWithKey:(id)arg0 classificationScore:(id)arg1 ;
-(id)initWithKey:(id)arg0 detectionScores:(id)arg1 frameResultIndex:(NSUInteger)arg2 ;
-(id)initWithKey:(id)arg0 trackingScores:(id)arg1 frameResultIndices:(id)arg2 ;


@end


#endif