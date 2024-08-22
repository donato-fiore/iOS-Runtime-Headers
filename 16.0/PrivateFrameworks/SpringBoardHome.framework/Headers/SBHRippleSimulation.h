// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHRIPPLESIMULATION_H
#define SBHRIPPLESIMULATION_H


#import <Foundation/Foundation.h>


@interface SBHRippleSimulation : NSObject {
    NSUInteger _rippleWidth;
    NSUInteger _rippleHeight;
    NSUInteger _rippleResolution;
    NSUInteger _rippleStyle;
    CGFloat _rippleTouchRadius;
    CGFloat _rippleTimeStep;
    CGFloat _rippleTouchHeight;
    *CGFloat _positionBuffer;
    *CGFloat _velocityBuffer;
}


@property (nonatomic, getter=isSettled) BOOL settled; // ivar: _settled


-(CGFloat)zPositionForGridCoordinate:(struct CGPoint )arg0 ;
-(id)initWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 resolution:(NSUInteger)arg2 style:(NSUInteger)arg3 ;
-(struct CATransform3D )transformForGridCoordinate:(struct CGPoint )arg0 ;
-(struct CGPoint )convertGridToRippleCoordinate:(struct CGPoint )arg0 ;
-(void)clear;
-(void)createRippleAtGridCoordinate:(struct CGPoint )arg0 strength:(CGFloat)arg1 ;
-(void)dealloc;
-(void)step:(CGFloat)arg0 ;


@end


#endif