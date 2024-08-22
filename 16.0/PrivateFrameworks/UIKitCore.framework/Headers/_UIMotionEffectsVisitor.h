// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMOTIONEFFECTSVISITOR_H
#define _UIMOTIONEFFECTSVISITOR_H

@class UIViewVisitor;



@interface _UIMotionEffectsVisitor : UIViewVisitor {
    BOOL _subviewAddedToHierarchy;
    NSUInteger _countOfMotionEffectsInSubview;
}




-(BOOL)_prepareVisitor:(id)arg0 toVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4 ;
-(BOOL)_visitView:(id)arg0 ;


@end


#endif