// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPARALLAXCOMPUTER_H
#define PUPARALLAXCOMPUTER_H


#import <Foundation/Foundation.h>


@interface PUParallaxComputer : NSObject

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (nonatomic) NSInteger model; // ivar: _model
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor


-(struct CGPoint )contentParallaxOffsetForViewFrame:(struct CGRect )arg0 visibleRect:(struct CGRect )arg1 ;


@end


#endif