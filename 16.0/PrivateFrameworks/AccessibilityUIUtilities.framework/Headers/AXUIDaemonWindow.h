// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIDAEMONWINDOW_H
#define AXUIDAEMONWINDOW_H

@class UIWindow;



@interface AXUIDaemonWindow : UIWindow



+(BOOL)_isSecure;
-(BOOL)_accessibilityWindowUsesOwnOrientationForComparingGeometry;
-(id)init;
-(struct UIEdgeInsets )_normalizedSafeAreaInsets;
-(void)_didUpdateOrientation:(id)arg0 ;


@end


#endif