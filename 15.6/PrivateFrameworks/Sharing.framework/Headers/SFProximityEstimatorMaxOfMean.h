// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPROXIMITYESTIMATORMAXOFMEAN_H
#define SFPROXIMITYESTIMATORMAXOFMEAN_H



#import "SFProximityEstimator.h"

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {
    char * _channelNumberArray;
    char * _rssiArray;
    unsigned int _rssiCount;
    unsigned int _rssiIndex;
    unsigned int _rssiMinCount;
}




-(id)description;
-(id)initWithProximityInfo:(id)arg0 ;
-(int)_estimateRSSIForSFBLEDevice:(id)arg0 ;
-(void)dealloc;


@end


#endif