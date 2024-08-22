// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONGATING_H
#define PISEGMENTATIONGATING_H


#import <Foundation/Foundation.h>


@interface PISegmentationGating : NSObject



+(BOOL)isValidSegmentationScoreForDepth:(struct PISegmentationBimodalScore )arg0 ;
+(NSUInteger)gatingResultForSegmentationScores:(id)arg0 ;
+(id)segmentationScoreRanges;


@end


#endif