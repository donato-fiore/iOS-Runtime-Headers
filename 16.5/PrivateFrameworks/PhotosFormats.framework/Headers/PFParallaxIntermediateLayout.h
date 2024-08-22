// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXINTERMEDIATELAYOUT_H
#define PFPARALLAXINTERMEDIATELAYOUT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFParallaxIntermediateLayout : NSObject

@property (readonly, nonatomic) CGFloat cropScore; // ivar: _cropScore
@property (readonly, nonatomic) NSString *debugStub;
@property (readonly, nonatomic) CGRect inactiveRect; // ivar: _inactiveRect
@property (readonly, nonatomic) NSUInteger inactiveStrategy; // ivar: _inactiveStrategy
@property (readonly, nonatomic) CGFloat layoutScore; // ivar: _layoutScore
@property (readonly, nonatomic) NSUInteger overlapStrategy; // ivar: _overlapStrategy
@property (readonly, nonatomic) NSUInteger parallaxStrategy; // ivar: _parallaxStrategy
@property (readonly, nonatomic) CGFloat timeBottomOverlap; // ivar: _timeBottomOverlap
@property (readonly, nonatomic) CGFloat timeTopOverlap; // ivar: _timeTopOverlap
@property (readonly, nonatomic) CGFloat uninflatedUnsafeAreaOverlap; // ivar: _uninflatedUnsafeAreaOverlap
@property (readonly, nonatomic) CGFloat unsafeAreaOverlap; // ivar: _unsafeAreaOverlap
@property (readonly, nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (readonly, nonatomic) NSUInteger zoomStrategy; // ivar: _zoomStrategy


-(BOOL)clockOverlapAcceptableForLayoutConfiguration:(id)arg0 ;
-(CGFloat)clockOverlapAcceptabilityForLayoutConfiguration:(id)arg0 inflated:(BOOL)arg1 ;
-(id)debugDescription;
-(id)initWithVisibleRect:(struct CGRect )arg0 ;
-(id)initWithVisibleRect:(struct CGRect )arg0 inactiveRect:(struct CGRect )arg1 zoomStrategy:(NSUInteger)arg2 overlapStrategy:(NSUInteger)arg3 parallaxStrategy:(NSUInteger)arg4 inactiveStrategy:(NSUInteger)arg5 ;
-(id)initWithVisibleRect:(struct CGRect )arg0 inactiveRect:(struct CGRect )arg1 zoomStrategy:(NSUInteger)arg2 overlapStrategy:(NSUInteger)arg3 parallaxStrategy:(NSUInteger)arg4 inactiveStrategy:(NSUInteger)arg5 cropScore:(CGFloat)arg6 layoutScore:(CGFloat)arg7 timeBottomOverlap:(CGFloat)arg8 timeTopOverlap:(CGFloat)arg9 unsafeAreaOverlap:(CGFloat)arg10 uninflatedUnsafeAreaOverlap:(CGFloat)arg11 ;


@end


#endif