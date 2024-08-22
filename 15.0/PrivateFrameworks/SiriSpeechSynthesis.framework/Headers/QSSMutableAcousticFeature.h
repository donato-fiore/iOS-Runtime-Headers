// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEACOUSTICFEATURE_H
#define QSSMUTABLEACOUSTICFEATURE_H

@class NSArray;


#import "QSSAcousticFeature.h"

@interface QSSMutableAcousticFeature : QSSAcousticFeature

@property (copy, nonatomic) NSArray *acoustic_feature_per_frame;
@property (nonatomic) float frame_duration;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif