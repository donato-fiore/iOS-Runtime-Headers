// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKRATECOLLECTION_H
#define AVPLAYBACKRATECOLLECTION_H

@class NSArray;


#import "AVPlaybackSpeedCollection.h"
#import "AVPlaybackRate.h"

@interface AVPlaybackRateCollection : AVPlaybackSpeedCollection

@property (readonly, nonatomic) NSArray *rates;
@property (readonly, nonatomic) AVPlaybackRate *selectedRate;


+(id)collectionWithDefaultRates;
+(id)collectionWithRates:(id)arg0 ;
-(void)selectNextPlaybackRate:(id)arg0 ;


@end


#endif