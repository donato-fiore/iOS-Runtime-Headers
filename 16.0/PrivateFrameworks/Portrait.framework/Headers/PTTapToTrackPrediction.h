// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTAPTOTRACKPREDICTION_H
#define PTTAPTOTRACKPREDICTION_H


#import <Foundation/Foundation.h>


@interface PTTapToTrackPrediction : NSObject

@property float confidence; // ivar: _confidence
@property CGRect rect; // ivar: _rect


-(id)initWithRect:(struct CGRect )arg0 confidence:(float)arg1 ;


@end


#endif