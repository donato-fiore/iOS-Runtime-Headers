// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARACTIVITYICONVIEW_H
#define _UISTATUSBARACTIVITYICONVIEW_H

@class UIStatusBarImageView, NSString, CAShapeLayer;
@protocol _UIStatusBarPersistentAnimation;



@interface _UIStatusBarActivityIconView : UIStatusBarImageView <_UIStatusBarPersistentAnimation>

 {
    BOOL _ringing;
    CGFloat _ringingIconScale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAShapeLayer *innerRingShapeLayer; // ivar: _innerRingShapeLayer
@property (retain, nonatomic) CAShapeLayer *outerRingShapeLayer; // ivar: _outerRingShapeLayer
@property (readonly) Class superclass;


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_setupRingingLayersForStyleAttributes:(id)arg0 ;
-(void)_teardownRingingLayers;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)resumePersistentAnimation;
-(void)setRinging:(BOOL)arg0 forUpdate:(id)arg1 ;


@end


#endif