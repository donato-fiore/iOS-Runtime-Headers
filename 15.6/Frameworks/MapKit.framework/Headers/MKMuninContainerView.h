// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMUNINCONTAINERVIEW_H
#define MKMUNINCONTAINERVIEW_H

@class UIView, UIColor, NSArray, UIActivityIndicatorView;
@protocol MKMuninContainerViewDelegate, NSObject;


#import "MKMuninContainerBadgeView.h"
#import "MKMapItem.h"

@interface MKMuninContainerView : UIView {
    UIColor *_dimmingViewBackgroundColorGreyOpaque;
    UIColor *_dimmingViewBackgroundColorBlackOpaque;
    UIColor *_dimmingViewBackgroundColorBlackTranslucent;
    UIColor *_dimmingViewBackgroundColorClear;
    UIColor *_dimmingViewBackgroundColorPhotosOpaque;
    NSArray *_badgeConstraints;
}


@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic, getter=isBadgeOnLeadingEdge) BOOL badgeOnLeadingEdge; // ivar: _badgeOnLeadingEdge
@property (retain, nonatomic) MKMuninContainerBadgeView *badgeView; // ivar: _badgeView
@property (weak, nonatomic) NSObject<MKMuninContainerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger dimmingState; // ivar: _dimmingState
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorGreyOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorPhotosOpaque;
@property (nonatomic) BOOL floatingDimmingStyle; // ivar: _floatingDimmingStyle
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) NSObject<NSObject> *muninViewDidBecomeAdequatelyDrawnObserver; // ivar: _muninViewDidBecomeAdequatelyDrawnObserver
@property (retain, nonatomic) NSObject<NSObject> *muninViewDidBecomeFullyDrawnObserver; // ivar: _muninViewDidBecomeFullyDrawnObserver
@property (nonatomic) BOOL photosDimmingStyle; // ivar: _photosDimmingStyle
@property (nonatomic) BOOL pipDimmingStyle; // ivar: _pipDimmingStyle


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFloatingDimmingStyle:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMuninView:(id)arg0 ;
-(id)initWithPhotosDimmingStyle:(BOOL)arg0 ;
-(id)muninViewIfPresent;
-(void)_commonInitWithMuninView:(id)arg0 ;
-(void)_updateBadgeConstraints;
-(void)_updateDimmingStateForMuninView:(id)arg0 completion:(id)arg1 ;
-(void)_updateDimmingViewActivityIndicator;
-(void)_updateDimmingViewBackgroundColor;
-(void)cancelIfPresent;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;


@end


#endif