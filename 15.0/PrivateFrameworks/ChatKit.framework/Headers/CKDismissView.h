// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDISMISSVIEW_H
#define CKDISMISSVIEW_H

@class UIView, NSArray;
@protocol CKDismissViewDelegate;



@interface CKDismissView : UIView

@property (weak, nonatomic) NSObject<CKDismissViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif