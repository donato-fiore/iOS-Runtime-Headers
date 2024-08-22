// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMLEVELINDICATORVIEW_H
#define CAMLEVELINDICATORVIEW_H

@class UIView, NSString;
@protocol CAMLevelViewModelChangeObserver;


#import "CAMLevelCrosshair.h"
#import "CAMLevelViewModel.h"

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver>



@property (readonly, nonatomic) CAMLevelCrosshair *_goalCrosshair; // ivar: __goalCrosshair
@property (readonly, nonatomic) CAMLevelCrosshair *_userCrosshair; // ivar: __userCrosshair
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMLevelViewModel *viewModel; // ivar: _viewModel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg0 ;
-(void)_updateCrosshairAlphasWithAlpha:(CGFloat)arg0 indicatorMode:(NSInteger)arg1 ;
-(void)_updateCrosshairHighlightWithOffset:(struct UIOffset )arg0 ;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didPublishChange:(NSUInteger)arg1 withContext:(*void)arg2 ;


@end


#endif