// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDCONTAINERVIEW_H
#define MKLOOKAROUNDCONTAINERVIEW_H

@class UIView, UIColor, NSArray, UIActivityIndicatorView;
@protocol MKLookAroundContainerViewDelegate, NSObject;


#import "MKLookAroundContainerBadgeView.h"
#import "MKMapItem.h"

@interface MKLookAroundContainerView : UIView {
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
@property (retain, nonatomic) MKLookAroundContainerBadgeView *badgeView; // ivar: _badgeView
@property (weak, nonatomic) NSObject<MKLookAroundContainerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger dimmingState; // ivar: _dimmingState
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorGreyOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorPhotosOpaque;
@property (nonatomic) BOOL floatingDimmingStyle; // ivar: _floatingDimmingStyle
@property (retain, nonatomic) NSObject<NSObject> *lookAroundViewDidBecomeAdequatelyDrawnObserver; // ivar: _lookAroundViewDidBecomeAdequatelyDrawnObserver
@property (retain, nonatomic) NSObject<NSObject> *lookAroundViewDidBecomeFullyDrawnObserver; // ivar: _lookAroundViewDidBecomeFullyDrawnObserver
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) BOOL photosDimmingStyle; // ivar: _photosDimmingStyle
@property (nonatomic) BOOL pipDimmingStyle; // ivar: _pipDimmingStyle


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFloatingDimmingStyle:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLookAroundView:(id)arg0 ;
-(id)initWithPhotosDimmingStyle:(BOOL)arg0 ;
-(id)lookAroundViewIfPresent;
-(void)_commonInitWithLookAroundView:(id)arg0 ;
-(void)_updateBadgeConstraints;
-(void)_updateDimmingStateForLookAroundView:(id)arg0 completion:(id)arg1 ;
-(void)_updateDimmingViewActivityIndicator;
-(void)_updateDimmingViewBackgroundColor;
-(void)cancelIfPresent;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;


@end


#endif