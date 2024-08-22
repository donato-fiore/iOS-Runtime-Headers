// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUCONTAINERTITLEVIEW_H
#define NUCONTAINERTITLEVIEW_H

@class UIView, NSString;
@protocol TUNavigationBarCompressible;



@interface NUContainerTitleView : UIView <TUNavigationBarCompressible>



@property (nonatomic) CGFloat contentAlpha;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_centeringReferenceView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif