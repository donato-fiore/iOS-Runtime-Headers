// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKINDICATORVIEW_H
#define WKINDICATORVIEW_H

@class UIView, UIActivityIndicatorView, _UIBackdropView, UILabel;



@interface WKIndicatorView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // ivar: __activityIndicatorView
@property (retain, nonatomic) _UIBackdropView *_backdropView; // ivar: __backdropView
@property (nonatomic) BOOL _hasBeenConfigured; // ivar: __hasBeenConfigured
@property (retain, nonatomic) UILabel *_label; // ivar: __label


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureViewIfNeeded;
-(void)hideViewAndRemoveFromHostingView;
-(void)showViewWithMessage:(id)arg0 inHostingView:(id)arg1 ;


@end


#endif