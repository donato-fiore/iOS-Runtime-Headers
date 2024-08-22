// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCANDIDATEPICKERVIEW_IOS_H
#define AKCANDIDATEPICKERVIEW_IOS_H

@class UIView, NSArray, UIStackView, UIVisualEffectView;



@interface AKCandidatePickerView_iOS : UIView

@property (nonatomic) SEL action; // ivar: _action
@property (retain, nonatomic) NSArray *annotations; // ivar: _annotations
@property (nonatomic) NSInteger blurStyle; // ivar: _blurStyle
@property (retain, nonatomic) UIStackView *buttonContainer; // ivar: _buttonContainer
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) NSArray *itemTags; // ivar: _itemTags
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(NSInteger)tagForCandidateItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 items:(id)arg1 annotations:(id)arg2 target:(id)arg3 action:(SEL)arg4 visualStyle:(NSInteger)arg5 ;
-(struct CGSize )intrinsicContentSize;
-(void)_createButtonsWithBlurStyle:(NSInteger)arg0 ;
-(void)_selectBackground:(id)arg0 ;
-(void)_selectBackground:(id)arg0 animated:(BOOL)arg1 ;
-(void)setBarHidden:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setSelectedIndex:(NSUInteger)arg0 ;


@end


#endif