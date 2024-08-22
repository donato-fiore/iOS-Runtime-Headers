// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARBLUETOOTHBATTERYITEMVIEW_H
#define UISTATUSBARBLUETOOTHBATTERYITEMVIEW_H



#import "UIStatusBarItemView.h"
#import "UIImage.h"

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {
    int _capacity;
    int _accessibilityCachedHUDCapacity;
    UIImage *_accessibilityCachedHUDImage;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)_normalizedCapacity;
-(CGFloat)extraLeftPadding;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(struct UIEdgeInsets )_accessibilityHUDBatteryInsidesInsets;


@end


#endif