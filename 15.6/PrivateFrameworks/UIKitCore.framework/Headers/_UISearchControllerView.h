// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHCONTROLLERVIEW_H
#define _UISEARCHCONTROLLERVIEW_H



#import "UIView.h"

@interface _UISearchControllerView : UIView

@property (nonatomic) BOOL _ensureSystemInputViewAboveSearchBarContainerView; // ivar: __ensureSystemInputViewAboveSearchBarContainerView


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_addSubview:(id)arg0 positioned:(NSInteger)arg1 relativeTo:(id)arg2 ;
-(void)_ensureCarPlayLimitedUIIsOnTop;
-(void)_ensureContainerIsOnTop;
-(void)_ensureViewOfClassIsOnTop:(Class)arg0 ;
-(void)bringSubviewToFront:(id)arg0 ;
-(void)sendSubviewToBack:(id)arg0 ;


@end


#endif