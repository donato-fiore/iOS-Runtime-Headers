// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBURSTCLUSTERDIVIDER_H
#define CIBURSTCLUSTERDIVIDER_H


#import <Foundation/Foundation.h>


@interface CIBurstClusterDivider : NSObject

@property float actionAmount; // ivar: actionAmount
@property float dividerScore; // ivar: dividerScore
@property float highNoiseThreshold; // ivar: highNoiseThreshold
@property int leftImage; // ivar: leftImage
@property float noiseThreshold; // ivar: noiseThreshold
@property int trueLocalMaximum; // ivar: trueLocalMaximum


-(NSInteger)compareActionAmounts:(id)arg0 ;
-(NSInteger)compareDividers:(id)arg0 ;
-(NSInteger)compareIndices:(id)arg0 ;


@end


#endif