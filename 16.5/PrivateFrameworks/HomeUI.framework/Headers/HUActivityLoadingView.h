// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACTIVITYLOADINGVIEW_H
#define HUACTIVITYLOADINGVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, UIStackView;



@interface HUActivityLoadingView : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (readonly, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (readonly, nonatomic) UIStackView *mainStackView; // ivar: _mainStackView
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (readonly, nonatomic) UIStackView *titleSpinnerStackView; // ivar: _titleSpinnerStackView


+(id)watchedKeyPaths;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 activityIndicatorStyle:(NSInteger)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_watchLabelsForContentAndResizeIfNecessary;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif