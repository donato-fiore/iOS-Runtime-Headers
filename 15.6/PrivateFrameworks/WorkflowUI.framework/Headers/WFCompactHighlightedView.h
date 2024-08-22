// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTHIGHLIGHTEDVIEW_H
#define WFCOMPACTHIGHLIGHTEDVIEW_H

@class UIView, NSString, NSArray;
@protocol MTVisualStylingRequiring;



@interface WFCompactHighlightedView : UIView <MTVisualStylingRequiring>



@property (weak, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) UIView *contentDimmingView; // ivar: _contentDimmingView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif