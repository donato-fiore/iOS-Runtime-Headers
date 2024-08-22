// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUHITTESTVIEW_H
#define SUHITTESTVIEW_H

@class UIView, NSMutableArray;



@interface SUHitTestView : UIView {
    NSMutableArray *_hitTestTargets;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)addHitTestTarget:(id)arg0 ;
-(void)dealloc;
-(void)removeHitTestTarget:(id)arg0 ;


@end


#endif