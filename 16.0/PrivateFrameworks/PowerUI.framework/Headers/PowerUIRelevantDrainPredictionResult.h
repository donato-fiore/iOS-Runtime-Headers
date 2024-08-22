// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIRELEVANTDRAINPREDICTIONRESULT_H
#define POWERUIRELEVANTDRAINPREDICTIONRESULT_H


#import <Foundation/Foundation.h>


@interface PowerUIRelevantDrainPredictionResult : NSObject

@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) BOOL significantDrainAhead; // ivar: _significantDrainAhead
@property (nonatomic) CGFloat threshold; // ivar: _threshold


-(id)description;
-(id)init;


@end


#endif