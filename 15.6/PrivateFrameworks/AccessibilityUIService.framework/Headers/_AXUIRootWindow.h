// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AXUIROOTWINDOW_H
#define _AXUIROOTWINDOW_H

@class UIRootWindow;
@protocol AXUIWindowProtocol;



@interface _AXUIRootWindow : UIRootWindow <AXUIWindowProtocol>



@property (nonatomic) BOOL isHandlingFullScreenPresentation; // ivar: _isHandlingFullScreenPresentation
@property (nonatomic) BOOL shouldRespondToDarkModeChanges; // ivar: _shouldRespondToDarkModeChanges


+(BOOL)_isSecure;
-(BOOL)_accessibilityIsIsolatedWindow;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_wantsSceneAssociation;
-(BOOL)keepContextInBackground;
-(NSInteger)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg0 ;
-(id)_accessibilityElementCommunityIdentifier;
-(id)_layerForCoordinateSpaceConversion;
-(id)accessibilityLabel;
-(id)description;
-(struct UIEdgeInsets )_normalizedSafeAreaInsets;


@end


#endif