// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATIONRANDOMGENERATOR_H
#define KNANIMATIONRANDOMGENERATOR_H

@class NSString;
@protocol TSDAnimationRandomGenerator;

#import <Foundation/Foundation.h>


@interface KNAnimationRandomGenerator : NSObject <TSDAnimationRandomGenerator>

 {
    *TSCERandGenerator _randGenerator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat randomDouble;
@property (nonatomic) NSUInteger seed; // ivar: _seed
@property (readonly) Class superclass;


+(id)randomGeneratorFromPluginContext:(id)arg0 ;
+(id)randomGeneratorWithSeed:(id)arg0 ;
+(unsigned int)generateNewSeed;
-(CGFloat)doubleBetween:(CGFloat)arg0 ;
-(NSInteger)intBetween:(NSInteger)arg0 ;
-(id)initWithSeed:(id)arg0 ;
-(struct ? )GLPoint2DRandomPoint;
-(struct ? )GLPoint3DRandomDirection;
-(struct ? )GLPoint3DRandomPoint;
-(struct ? )GLPoint4DRandomPoint;
-(void)dealloc;


@end


#endif