// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCOMPOSITESPRING_H
#define CAMCOMPOSITESPRING_H

@class NSArray;


#import "CAMSpring.h"

@interface CAMCompositeSpring : CAMSpring

@property (retain, nonatomic) NSArray *addedSprings; // ivar: _addedSprings


-(void)updateForTimestamp:(CGFloat)arg0 ;


@end


#endif