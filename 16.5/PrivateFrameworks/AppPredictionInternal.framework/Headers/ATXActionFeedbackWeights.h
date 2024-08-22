// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONFEEDBACKWEIGHTS_H
#define ATXACTIONFEEDBACKWEIGHTS_H


#import <Foundation/Foundation.h>


@interface ATXActionFeedbackWeights : NSObject {
    ? _confirmWeights;
    ? _rejectWeights;
}




+(id)sharedInstance;
-(float)confirmWeightForFeedbackStage:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 ;
-(float)rejectWeightForFeedbackStage:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 ;
-(id)init;
-(id)initWithAssetClass:(Class)arg0 ;


@end


#endif