// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCMUTABLECOMPOSITIONFRAGMENT_H
#define RCMUTABLECOMPOSITIONFRAGMENT_H

@class NSURL;


#import "RCCompositionFragment.h"

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (retain, nonatomic) NSURL *AVOutputURL;
@property (nonatomic) CGFloat contentDuration;
@property (nonatomic) ? timeRangeInComposition;
@property (nonatomic) ? timeRangeInContentToUse;


-(BOOL)intersectWithTimeRange:(struct ? )arg0 ;


@end


#endif