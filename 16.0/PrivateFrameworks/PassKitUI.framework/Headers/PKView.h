// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVIEW_H
#define PKVIEW_H

@class UIView, NSHashTable;



@interface PKView : UIView {
    os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}




-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addWindowObserver:(id)arg0 ;
-(void)didMoveToWindow;
-(void)removeWindowObserver:(id)arg0 ;


@end


#endif