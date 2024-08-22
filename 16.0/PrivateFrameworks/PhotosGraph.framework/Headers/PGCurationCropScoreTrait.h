// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCURATIONCROPSCORETRAIT_H
#define PGCURATIONCROPSCORETRAIT_H



#import "PGCurationTrait.h"

@interface PGCurationCropScoreTrait : PGCurationTrait

@property (nonatomic) CGFloat minimumSquareCropScore; // ivar: _minimumSquareCropScore


-(BOOL)isActive;
-(id)initWithMinimumSquareCropScore:(CGFloat)arg0 ;


@end


#endif