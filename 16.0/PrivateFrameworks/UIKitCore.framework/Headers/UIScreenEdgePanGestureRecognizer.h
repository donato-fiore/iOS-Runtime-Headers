// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCREENEDGEPANGESTURERECOGNIZER_H
#define UISCREENEDGEPANGESTURERECOGNIZER_H

@class NSString;
@protocol _UISEGestureFeatureDelegate;


#import "UIPanGestureRecognizer.h"
#import "_UISEGestureFeatureSettings.h"
#import "_UISEMuxGestureFeature.h"

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate>

 {
    _UISEGestureFeatureSettings *_settings;
    id *_createFeatureBlock;
    _UISEMuxGestureFeature *_rootFeature;
    NSUInteger _touchedEdges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edges; // ivar: _edges
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
+(BOOL)supportsSecureCoding;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg0 ;
-(CGFloat)_bottomEdgeAngleWindow;
-(CGFloat)_bottomEdgeRegionSize;
-(CGFloat)_edgeRegionSize;
-(NSInteger)_touchInterfaceOrientation;
-(NSUInteger)touchedEdges;
-(id)debugDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 type:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(void)_setBottomEdgeAngleWindow:(CGFloat)arg0 ;
-(void)_setBottomEdgeRegionSize:(CGFloat)arg0 ;
-(void)_setEdgeRegionSize:(CGFloat)arg0 ;
-(void)_setHysteresis:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)featureDidChangeState:(id)arg0 ;
-(void)reset;
-(void)setMinimumNumberOfTouches:(NSUInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif