// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPARAMETERLAYOUTVIEW_H
#define WFPARAMETERLAYOUTVIEW_H

@class UIView, UIColor;
@protocol WFParameterLayoutViewDelegate;



@interface WFParameterLayoutView : UIView

@property (weak, nonatomic) NSObject<WFParameterLayoutViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (retain, nonatomic) UIColor *normalBackgroundColor; // ivar: _normalBackgroundColor
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable


-(id)accessibilityElements;
-(void)fadeOutHighlight;
-(void)highlight;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)unhighlight;
-(void)updateBackgroundColor;


@end


#endif