// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXPASSTHROUGHCONTAINERVIEW_H
#define JFXPASSTHROUGHCONTAINERVIEW_H

@class UIView;
@protocol JFXPassThroughContainerViewDelegate;



@interface JFXPassThroughContainerView : UIView

@property (weak, nonatomic) NSObject<JFXPassThroughContainerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldDelegatePointInside; // ivar: _shouldDelegatePointInside


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif