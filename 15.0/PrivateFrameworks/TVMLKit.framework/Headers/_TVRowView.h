// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVROWVIEW_H
#define _TVROWVIEW_H

@class TVFocusRedirectView, NSArray, NSString, UIView;
@protocol TVAppTemplateImpressionable;



@interface _TVRowView : TVFocusRedirectView <TVAppTemplateImpressionable>



@property (readonly, copy, nonatomic) NSArray *allComponents; // ivar: _allComponents
@property (readonly, copy, nonatomic) NSArray *centerComponents; // ivar: _centerComponents
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (nonatomic) NSInteger contentVerticalAlignment; // ivar: _contentVerticalAlignment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIView *lastFocusedView; // ivar: _lastFocusedView
@property (readonly, copy, nonatomic) NSArray *leftComponents; // ivar: _leftComponents
@property (weak, nonatomic) UIView *preferredFocusedComponent; // ivar: _preferredFocusedComponent
@property (readonly, copy, nonatomic) NSArray *rightComponents; // ivar: _rightComponents
@property (readonly) Class superclass;


+(struct CGRect )_boundingRectForComponents:(id)arg0 interitemSpacing:(CGFloat)arg1 boundingSize:(struct CGSize )arg2 horizontalAlignment:(NSInteger)arg3 allowsOverflow:(BOOL)arg4 ;
+(struct CGRect )_leftAlignedFrameForComponent:(id)arg0 previousComponent:(id)arg1 interitemSpacing:(CGFloat)arg2 ;
+(void)_alignComponents:(id)arg0 withLineSize:(struct CGSize )arg1 boundingRect:(struct CGRect )arg2 originYBump:(CGFloat)arg3 verticalAlignment:(NSInteger)arg4 horizontalAlignment:(NSInteger)arg5 ;
-(BOOL)canBecomeFocused;
-(NSInteger)_alignmentFromView:(id)arg0 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )_sizeThatFitsComponents:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addSubview:(id)arg0 maxViewWidth:(CGFloat)arg1 ;
-(void)_lineUpComponents:(id)arg0 alignment:(NSInteger)arg1 attribute:(NSInteger)arg2 ;
-(void)_resetSubviews;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif