// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKUSERTRACKINGBARBUTTONITEM_H
#define MKUSERTRACKINGBARBUTTONITEM_H

@class UIBarButtonItem, UIButton, UIImage, UIView, UINavigationBar, UIToolbar, NSString;
@protocol MKUserTrackingButtonTarget, MKUserTrackingView;


#import "_MKUserTrackingButtonController.h"
#import "_MKUserTrackingButton.h"
#import "MKMapView.h"

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget>

 {
    BOOL _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    _MKUserTrackingButton *_userTrackingButton;
    BOOL _explicitlyEnabled;
    BOOL _internallyEnabled;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    MKMapView *_mapView;
}


@property (retain, nonatomic) UIView *_associatedView; // ivar: _associatedView
@property (retain, nonatomic) UINavigationBar *_navigationBar; // ivar: _navigationBar
@property (nonatomic, setter=_setState:) NSInteger _state;
@property (retain, nonatomic) UIToolbar *_toolbar; // ivar: _toolbar
@property (retain, nonatomic, setter=_setUserTrackingView:) NSObject<MKUserTrackingView> *_userTrackingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapView *mapView;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) BOOL selectsWhenTracking;
@property (readonly) Class superclass;


+(Class)_activityIndicatorClass;
-(BOOL)_isHighlightedForState:(NSInteger)arg0 ;
-(BOOL)_isInMiniBar;
-(BOOL)isEnabled;
-(NSInteger)_activityIndicatorStyle;
-(id)_imageForState:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_imageForUserTrackingMode:(NSInteger)arg0 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(NSInteger)arg0 ;
-(id)_trackingEmptyImage;
-(id)_trackingFollowImage;
-(id)_trackingFollowWithHeadingImage;
-(id)_trackingNoneImage;
-(id)createViewForNavigationItem:(id)arg0 ;
-(id)createViewForToolbar:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMapView:(id)arg0 ;
-(void)_goToNextMode:(id)arg0 ;
-(void)_repositionViews;
-(void)_setImage:(id)arg0 forUserTrackingMode:(NSInteger)arg1 ;
-(void)_setInternallyEnabled:(BOOL)arg0 ;
-(void)_setLandscapeImagePhone:(id)arg0 forUserTrackingMode:(NSInteger)arg1 ;
-(void)_updateForState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif