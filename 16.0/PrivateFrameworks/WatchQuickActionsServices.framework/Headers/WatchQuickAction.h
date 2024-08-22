// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WATCHQUICKACTION_H
#define WATCHQUICKACTION_H

@class NSString, UIView, UIColor, UIBezierPath;
@protocol WatchQuickActionHostObserver, _UIViewBoundingPathChangeObserver, NSSecureCoding, WatchQuickActionAnimationHandler, WQAHostLifecycleObserver;

#import <Foundation/Foundation.h>


@interface WatchQuickAction : NSObject <WatchQuickActionHostObserver, _UIViewBoundingPathChangeObserver, NSSecureCoding>



@property (readonly, copy, nonatomic) id *activationCallback; // ivar: _activationCallback
@property (nonatomic) BOOL allowsResizingAnimations; // ivar: _allowsResizingAnimations
@property (weak, nonatomic) NSObject<WatchQuickActionAnimationHandler> *animationHandler; // ivar: _animationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<WQAHostLifecycleObserver> *hostLifecycleObserver; // ivar: _hostLifecycleObserver
@property (weak, nonatomic) UIView *hostingView; // ivar: _hostingView
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger internalQuickActionType; // ivar: _internalQuickActionType
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) CGFloat overlayCornerRadius; // ivar: _overlayCornerRadius
@property (nonatomic) CGPoint overlayInset; // ivar: _overlayInset
@property (retain, nonatomic) UIColor *overlayTintColor; // ivar: _overlayTintColor
@property (retain, nonatomic) UIBezierPath *path; // ivar: _path
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *viewToOverlay; // ivar: _viewToOverlay
@property (nonatomic) NSInteger visualsToken; // ivar: _visualsToken


+(BOOL)supportsSecureCoding;
+(id)quickActionFromSerializedData:(id)arg0 error:(*id)arg1 ;
+(id)serializedDataFromQuickAction:(id)arg0 error:(*id)arg1 ;
-(BOOL)canShowOverlays;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)currentVisualsToken;
-(NSInteger)quickActionType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedTitle:(id)arg0 activationCallback:(id)arg1 ;
-(id)initWithLocalizedTitle:(id)arg0 targetView:(id)arg1 activationCallback:(id)arg2 ;
-(id)initWithLocalizedTitle:(id)arg0 targetView:(id)arg1 hostingView:(id)arg2 activationCallback:(id)arg3 ;
-(id)quickActionHostingView;
-(id)quickActionPath;
-(id)quickActionPrimaryView;
-(void)_applyOverlayFromView:(id)arg0 withHostingView:(id)arg1 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
// -(void)_commonInitLocalizedTitle:(id)arg0 quickActionType:(NSInteger)arg1 targetView:(id)arg2 hostingView:(id)arg3 withQuickActivationCallback:(id)arg4 withQuickActivationEndCallback:(unk)arg5  ;
-(void)_updateOverlaysIfNecessary;
-(void)applyBezierPath:(id)arg0 withHostingView:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)quickActionHostDidInvalidate;
-(void)start;
-(void)startWithCallback:(id)arg0 ;
-(void)updateLocalizedTitle:(id)arg0 ;


@end


#endif