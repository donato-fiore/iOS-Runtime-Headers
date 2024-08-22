// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKEDITOPTIONPICKERVIEW_H
#define NTKEDITOPTIONPICKERVIEW_H

@class UIView, NSArray, UIView<NTKEditOptionContainerView>;



@interface NTKEditOptionPickerView : UIView {
    NSArray *_options;
    NSUInteger _visibleOptionBufferSize;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) UIView<NTKEditOptionContainerView> *containerView; // ivar: _containerView
@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (readonly, nonatomic) NSUInteger numberOfOptions; // ivar: _numberOfOptions
@property (nonatomic) NSUInteger numberOfSides;
@property (copy, nonatomic) id *optionToViewMapper; // ivar: _optionToViewMapper
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) id *selectedOption;
@property (nonatomic) NSUInteger selectedOptionIndex; // ivar: _selectedOptionIndex


-(Class)_sideViewClass;
-(id)_newContainerView;
-(id)_selectedSideView;
-(id)_sideViewAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithOptions:(id)arg0 selectedOption:(id)arg1 ;
-(id)optionAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_frameForContainerView;
-(void)_configureSideView:(id)arg0 forOption:(id)arg1 ;
-(void)_enumerateSideViewsWithBlock:(id)arg0 ;
-(void)_tileContainerForTransitionDirection:(NSInteger)arg0 ;
-(void)_transitionAnimatedToSelectedOptionFromIndex:(NSUInteger)arg0 ;
-(void)_transitionToSelectedOption;
-(void)_updateContainer;
-(void)_willDisplaySideView:(id)arg0 ;
-(void)applyBreathingScale:(CGFloat)arg0 ;
-(void)applyRubberBandingFraction:(CGFloat)arg0 ;
-(void)decrementSelection;
-(void)incrementSelection;
-(void)layoutSubviews;
-(void)setTransitionFraction:(CGFloat)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;


@end


#endif