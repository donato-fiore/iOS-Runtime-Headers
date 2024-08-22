// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFEEDBACKSTATEBUILDER_H
#define ATXFEEDBACKSTATEBUILDER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface ATXFeedbackStateBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}




-(id)finish;
-(id)init;
-(id)initWithABGroup:(id)arg0 assetVersion:(NSInteger)arg1 ;
-(void)recordPrediction:(id)arg0 actionHash:(NSUInteger)arg1 totalScore:(float)arg2 scoreInputs:(*float)arg3 isMediumConfidenceForBlendingLayer:(BOOL)arg4 isHighConfidenceForBlendingLayer:(BOOL)arg5 ;


@end


#endif