// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCMUTABLECOMPOSITION_H
#define RCMUTABLECOMPOSITION_H

@class NSArray;


#import "RCComposition.h"

@interface RCMutableComposition : RCComposition

@property (retain, nonatomic) NSArray *decomposedFragments;


-(void)recacheComposedDuration;


@end


#endif