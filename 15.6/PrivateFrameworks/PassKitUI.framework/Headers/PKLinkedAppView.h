// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKLINKEDAPPVIEW_H
#define PKLINKEDAPPVIEW_H

@class UIImageView, UILabel, UIActivityIndicatorView, NSURL, UIColor, NSString, NSArray;
@protocol PKLinkedApplicationObserver;


#import "PKTableViewCell.h"
#import "PKContinuousButton.h"
#import "PKLinkedAppUserRatingView.h"
#import "PKLinkedApplication.h"

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver>

 {
    UIImageView *_iconView;
    UILabel *_appName;
    PKContinuousButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
}


@property (copy, nonatomic) NSURL *appLaunchURL;
@property (retain, nonatomic) UIColor *buttonBackgroundColor; // ivar: _buttonBackgroundColor
@property (retain, nonatomic) UIColor *buttonTintColor; // ivar: _buttonTintColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication; // ivar: _linkedApplication
@property (retain, nonatomic) UIColor *mainLabelColor; // ivar: _mainLabelColor
@property (copy, nonatomic) NSArray *storeIDs;
@property (retain, nonatomic) UIColor *subTextLabelColor; // ivar: _subTextLabelColor
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithLinkedApplication:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStoreIDs:(id)arg0 systemAppBundleIdentifiers:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_cleanupViews;
-(void)_layoutLoadingView;
-(void)_layoutLockupView;
-(void)_layoutNotAvailableView;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)reloadApplicationStateIfNecessary;
-(void)setApplicationIcon:(id)arg0 ;
-(void)setApplicationName:(id)arg0 ;
-(void)setLoadingText:(id)arg0 ;
-(void)setPrice:(id)arg0 ;


@end


#endif