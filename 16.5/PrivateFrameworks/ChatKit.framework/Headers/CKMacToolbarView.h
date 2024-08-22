// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMACTOOLBARVIEW_H
#define CKMACTOOLBARVIEW_H

@class UIView;
@protocol CKMacToolbarViewDelegate;



@interface CKMacToolbarView : UIView

@property (weak, nonatomic) NSObject<CKMacToolbarViewDelegate> *delegate; // ivar: _delegate


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif