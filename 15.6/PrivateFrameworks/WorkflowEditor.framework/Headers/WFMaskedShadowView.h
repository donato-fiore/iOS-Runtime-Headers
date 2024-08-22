// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMASKEDSHADOWVIEW_H
#define WFMASKEDSHADOWVIEW_H

@class UIView, WFAction, UIColor, CAShapeLayer, NSProgress;



@interface WFMaskedShadowView : UIView {
    BOOL _attributesChanged;
    BOOL _actionRunning;
}


@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (nonatomic) NSInteger actionIndex; // ivar: _actionIndex
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (weak, nonatomic) CAShapeLayer *borderLayer; // ivar: _borderLayer
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UIColor *runningShadowColor; // ivar: _runningShadowColor
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (weak, nonatomic) NSProgress *workflowRunningProgress; // ivar: _workflowRunningProgress


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyAttributes;
-(void)attributesDidChange;
-(void)dealloc;
-(void)initializeInstance;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateRunningIndicator;
-(void)updateShadowColorAnimated:(BOOL)arg0 ;


@end


#endif