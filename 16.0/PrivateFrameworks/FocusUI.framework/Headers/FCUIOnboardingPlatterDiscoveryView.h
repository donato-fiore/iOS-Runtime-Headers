// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIONBOARDINGPLATTERDISCOVERYVIEW_H
#define FCUIONBOARDINGPLATTERDISCOVERYVIEW_H

@class PLPlatterDiscoveryView, UIView, NSString;
@protocol _TtP7FocusUI32QuickStartViewControllerDelegate_, FCUIOnboardingPlatterDiscoveryViewDelegate;



@interface FCUIOnboardingPlatterDiscoveryView : PLPlatterDiscoveryView <_TtP7FocusUI32QuickStartViewControllerDelegate_>

 {
    UIView *_notificationPlatterView1;
    UIView *_notificationPlatterView2;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCUIOnboardingPlatterDiscoveryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_bodyStringForDNDModeSemanticType:(NSInteger)arg0 ;
+(id)onboardingPlatterDiscoveryViewForMode:(id)arg0 ;
-(id)initWithMode:(id)arg0 ;
-(id)presentQuickStartForModeIdentifier:(SEL)arg0 ;
-(void)_configureGraphicViewIfNecessary;
-(void)_layoutGraphicView;
-(void)layoutSubviews;
-(void)requestDismissal:(id)arg0 ;


@end


#endif