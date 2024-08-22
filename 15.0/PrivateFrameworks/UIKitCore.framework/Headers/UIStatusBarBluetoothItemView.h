// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARBLUETOOTHITEMVIEW_H
#define UISTATUSBARBLUETOOTHITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {
    BOOL _connected;
    BOOL _shouldAnimateConnection;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)alphaForConnected:(BOOL)arg0 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)performPendedActions;
-(void)setVisible:(BOOL)arg0 ;


@end


#endif