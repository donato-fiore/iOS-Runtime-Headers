// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBURSTFACESCOREENTRY_H
#define CIBURSTFACESCOREENTRY_H


#import <Foundation/Foundation.h>


@interface CIBurstFaceScoreEntry : NSObject {
    float sumScores;
    float sumSqScores;
}


@property float maxScore; // ivar: maxScore
@property float minScore; // ivar: minScore
@property int numScores; // ivar: numScores


-(float)computeAverage;
-(float)computeStandardDeviation;
-(id)initWithScore:(float)arg0 ;
-(void)addScore:(float)arg0 ;


@end


#endif