// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSTRACKINGVISITOR_H
#define _UIFOCUSTRACKINGVISITOR_H

@class UIViewVisitor;



@interface _UIFocusTrackingVisitor : UIViewVisitor {
    BOOL _subviewAddedToHierarchy;
    NSUInteger _countOfFocusedAncestorTrackingViewsInSubtree;
}




-(BOOL)_prepareVisitor:(id)arg0 toVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4 ;
-(BOOL)_visitView:(id)arg0 ;


@end


#endif