// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKUSERTRACKINGBUTTON_H
#define _MKUSERTRACKINGBUTTON_H

@class UIButton, NSMutableDictionary, NSString;
@protocol MKUserTrackingButtonTarget, MKUserTrackingView;


#import "_MKUserTrackingButtonController.h"
#import "MKMapView.h"

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget>

 {
    NSMutableDictionary *_customImages;
    NSMutableDictionary *_customLandscapeImagePhones;
    NSMutableDictionary *_customImageEdgeInsets;
    BOOL _explicitlyEnabled;
    BOOL _internallyEnabled;
    BOOL _applyDefaultImageIfNeeded;
}


@property (readonly, nonatomic) NSUInteger behavior;
@property (readonly, nonatomic) _MKUserTrackingButtonController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inMiniBar; // ivar: _inMiniBar
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) BOOL selectsWhenTracking; // ivar: _selectsWhenTracking
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MKUserTrackingView> *userTrackingView;


+(Class)_activityIndicatorClass;
+(id)buttonWithMapView:(id)arg0 ;
+(id)buttonWithMapView:(id)arg0 applyDefaultImageIfNeeded:(BOOL)arg1 ;
+(id)buttonWithUserTrackingView:(id)arg0 ;
+(id)buttonWithUserTrackingView:(id)arg0 withType:(NSInteger)arg1 ;
+(id)buttonWithUserTrackingView:(id)arg0 withType:(NSInteger)arg1 applyDefaultImageIfNeeded:(BOOL)arg2 ;
-(BOOL)_isHighlightedForState:(NSInteger)arg0 ;
-(NSInteger)_activityIndicatorStyle;
-(NSInteger)_state;
-(id)_defaultImageForUserTrackingMode:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_imageForState:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_imageForUserTrackingMode:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(NSInteger)arg0 controlState:(NSUInteger)arg1 ;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_imageEdgeInsetsForUserTrackingMode:(NSInteger)arg0 ;
-(void)_repositionViews;
-(void)_setImage:(id)arg0 forUserTrackingMode:(NSInteger)arg1 controlState:(NSUInteger)arg2 ;
-(void)_setImageEdgeInsets:(struct UIEdgeInsets )arg0 forUserTrackingMode:(NSInteger)arg1 ;
-(void)_setInternallyEnabled:(BOOL)arg0 ;
-(void)_setLandscapeImagePhone:(id)arg0 forUserTrackingMode:(NSInteger)arg1 controlState:(NSUInteger)arg2 ;
-(void)_setState:(NSInteger)arg0 ;
-(void)_updateForState:(NSInteger)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForMiniBarState:(BOOL)arg0 ;


@end


#endif