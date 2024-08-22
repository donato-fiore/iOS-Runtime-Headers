// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDVIEWEXTERNALCONTROLLERBASE_H
#define SBDASHBOARDVIEWEXTERNALCONTROLLERBASE_H

@class CSCoverSheetViewControllerBase, NSString, NSSet, _UILegibilitySettings, NSArray;
@protocol CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalEventHandling, UICoordinateSpace;



@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalEventHandling>



@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExternalToDashBoard) BOOL externalToDashBoard; // ivar: _externalToDashBoard
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;


-(id)_presenter;
-(void)_registerAsExternalProviderIfNeeded;
-(void)_unregisterAsExternalProvider;
-(void)conformsToCSExternalBehaviorProviding;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif