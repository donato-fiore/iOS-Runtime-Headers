// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEGESTUREFEATURESETTINGS_H
#define _UISEGESTUREFEATURESETTINGS_H

@protocol _UISEGestureFeatureSettings;

#import <Foundation/Foundation.h>


@interface _UISEGestureFeatureSettings : NSObject <_UISEGestureFeatureSettings>



@property (nonatomic) CGFloat bottomEdgeAngleWindow; // ivar: _bottomEdgeAngleWindow
@property (nonatomic) CGFloat bottomEdgeRegionSize; // ivar: _bottomEdgeRegionSize
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) CGFloat cornerAngleWindow; // ivar: _cornerAngleWindow
@property (nonatomic) CGFloat edgeAngleWindow; // ivar: _edgeAngleWindow
@property (nonatomic) CGFloat edgeAngleWindowDecayTime; // ivar: _edgeAngleWindowDecayTime
@property (nonatomic) CGFloat edgeRegionSize; // ivar: _edgeRegionSize
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (nonatomic) NSUInteger interfaceBottomEdge; // ivar: _interfaceBottomEdge
@property (nonatomic) CGFloat maximumSwipeDuration; // ivar: _maximumSwipeDuration
@property (nonatomic) NSUInteger minimumNumberOfSubfeatures; // ivar: _minimumNumberOfSubfeatures
@property (nonatomic) NSUInteger targetEdges; // ivar: _targetEdges


-(id)init;


@end


#endif