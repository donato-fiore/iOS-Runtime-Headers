// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AXUIROOTWINDOW_H
#define _AXUIROOTWINDOW_H

@class UIRootWindow;
@protocol AXUIWindowProtocol;



@interface _AXUIRootWindow : UIRootWindow <AXUIWindowProtocol>



@property (nonatomic) BOOL isHandlingFullScreenPresentation; // ivar: _isHandlingFullScreenPresentation
@property (nonatomic) BOOL shouldRespondToDarkModeChanges; // ivar: _shouldRespondToDarkModeChanges


+(BOOL)_isSecure;
-(BOOL)_accessibilityIsIsolatedWindow;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg0 ;
-(id)_accessibilityElementCommunityIdentifier;
-(id)_layerForCoordinateSpaceConversion;
-(id)accessibilityLabel;
-(id)description;
-(struct UIEdgeInsets )_normalizedSafeAreaInsets;


@end


#endif