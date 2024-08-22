// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARNOTCHARGINGITEMVIEW_H
#define UISTATUSBARNOTCHARGINGITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"

@interface UIStatusBarNotChargingItemView : UIStatusBarItemView {
    NSString *_notChargingString;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;


@end


#endif