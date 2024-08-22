// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMICAMERAVIDEOFRAMERESULT_H
#define HMICAMERAVIDEOFRAMERESULT_H

@class NSSet, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMICameraVideoFrame.h"

@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding>



@property (readonly) NSSet *analyzerEvents; // ivar: _analyzerEvents
@property (readonly) NSDictionary *annotationScores; // ivar: _annotationScores
@property (readonly) NSArray *detections; // ivar: _detections
@property (readonly) NSInteger events; // ivar: _events
@property (readonly) NSSet *faceClassifications; // ivar: _faceClassifications
@property (readonly) HMICameraVideoFrame *frame; // ivar: _frame
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest


+(BOOL)supportsSecureCoding;
+(NSInteger)_eventsFromAnalyzerEvents:(id)arg0 ;
+(id)_annotationScoresFromAnalyzerEvents:(id)arg0 ;
+(id)_detectionsFromAnalyzerEvents:(id)arg0 ;
+(id)_faceClassificationsFromAnalyzerEvents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(id)arg0 events:(NSInteger)arg1 annotationScores:(id)arg2 detections:(id)arg3 regionOfInterest:(struct CGRect )arg4 faceClassifications:(id)arg5 ;
-(id)initWithFrame:(id)arg0 regionOfInterest:(struct CGRect )arg1 analyzerEvents:(id)arg2 ;
-(id)maxConfidenceEventForEventClass:(Class)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif