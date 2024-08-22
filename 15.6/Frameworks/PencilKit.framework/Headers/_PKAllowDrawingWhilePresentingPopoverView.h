// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKALLOWDRAWINGWHILEPRESENTINGPOPOVERVIEW_H
#define _PKALLOWDRAWINGWHILEPRESENTINGPOPOVERVIEW_H

@class UIView;
@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;



@interface _PKAllowDrawingWhilePresentingPopoverView : UIView

@property (weak, nonatomic) NSObject<_PKAllowDrawingWhilePresentingPopoverViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isHitTesting; // ivar: _isHitTesting


-(id)_rootAncestorViewOfDimmmingView:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif