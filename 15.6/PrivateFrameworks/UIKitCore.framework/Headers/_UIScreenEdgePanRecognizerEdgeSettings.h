// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCREENEDGEPANRECOGNIZEREDGESETTINGS_H
#define _UISCREENEDGEPANRECOGNIZEREDGESETTINGS_H

@class UISettings;



@interface _UIScreenEdgePanRecognizerEdgeSettings : UISettings

@property (nonatomic) CGFloat bottomEdgeRegionSize; // ivar: _bottomEdgeRegionSize
@property (nonatomic) CGFloat edgeAngleWindow; // ivar: _edgeAngleWindow
@property (nonatomic) CGFloat edgeAngleWindowDecayTime; // ivar: _edgeAngleWindowDecayTime
@property (nonatomic) CGFloat edgeAngleWindowDegreees;
@property (nonatomic) CGFloat edgeRegionSize; // ivar: _edgeRegionSize
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (nonatomic) CGFloat maximumSwipeDuration; // ivar: _maximumSwipeDuration


+(id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif