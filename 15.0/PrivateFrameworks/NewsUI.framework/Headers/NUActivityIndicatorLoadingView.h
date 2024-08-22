// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUACTIVITYINDICATORLOADINGVIEW_H
#define NUACTIVITYINDICATORLOADINGVIEW_H

@class UIView, UIActivityIndicatorView, NSString, UILabel;
@protocol NULoadingViewProviding;



@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding>



@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;


-(id)initWithActivityIndicatorStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithText:(id)arg0 activityIndicatorStyle:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)loadingViewStartAnimating;
-(void)loadingViewStopAnimating;


@end


#endif