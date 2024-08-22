// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINTERACTIONNOTIFICATIONVIEW_H
#define CKINTERACTIONNOTIFICATIONVIEW_H

@class UIView, NSArray;
@protocol CKInteractionNotificationViewDelegate;



@interface CKInteractionNotificationView : UIView

@property (weak, nonatomic) NSObject<CKInteractionNotificationViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif