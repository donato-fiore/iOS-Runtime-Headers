// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFICONSTACKVIEW_H
#define WFICONSTACKVIEW_H

@class UIView, UIColor, CALayer, CAStateController;



@interface WFIconStackView : UIView

@property (retain, nonatomic) UIColor *appIconAverageColor; // ivar: _appIconAverageColor
@property (readonly, nonatomic) CALayer *colorLayer; // ivar: _colorLayer
@property (readonly, nonatomic) CALayer *iconLayer; // ivar: _iconLayer
@property (readonly, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController


-(BOOL)loadLayers;
-(id)imageWithColor:(id)arg0 ;
-(id)init;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(id)layerWithName:(id)arg0 fromParentLayer:(id)arg1 ;
-(void)layoutSubviews;
-(void)setState:(id)arg0 ;
-(void)setState:(id)arg0 onLayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupLayerWithBundleIdentifier:(id)arg0 ;
-(void)transitionToIconOnlyState;
-(void)transitionToStackedState;


@end


#endif