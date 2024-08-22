// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXMOVIECONTENTVIEWCONTROLLER_H
#define PRXMOVIECONTENTVIEWCONTROLLER_H

@class UIView;


#import "PRXCardContentViewController.h"

@interface PRXMovieContentViewController : PRXCardContentViewController

@property (nonatomic) CGFloat fadeInDelay; // ivar: _fadeInDelay
@property (nonatomic) CGFloat fadeInDuration; // ivar: _fadeInDuration
@property (readonly, nonatomic) CGSize movieDimensions; // ivar: _movieDimensions
@property (readonly, nonatomic) UIView *movieView; // ivar: _movieView
@property (readonly, nonatomic) CGFloat productHeight; // ivar: _productHeight
@property (nonatomic) BOOL shouldFadeInElementsOnAppear; // ivar: _shouldFadeInElementsOnAppear


-(id)initWithMovieView:(id)arg0 movieDimensions:(struct CGSize )arg1 productHeight:(CGFloat)arg2 ;
-(void)fadeInAuxiliaryViewsOverDuration:(CGFloat)arg0 delay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)hideAuxiliaryViews;
-(void)setAuxiliaryViewsAlpha:(CGFloat)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif