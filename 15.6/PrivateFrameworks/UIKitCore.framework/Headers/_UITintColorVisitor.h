// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITINTCOLORVISITOR_H
#define _UITINTCOLORVISITOR_H

@class UIViewVisitor;


#import "UIView.h"

@interface _UITintColorVisitor : UIViewVisitor {
    NSUInteger _reasons;
    UIView *_originalVisitedView;
    UIView *_changedSubview;
}




-(BOOL)_prepareVisitor:(id)arg0 toVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4 ;
-(BOOL)_visitView:(id)arg0 ;
-(id)initWithNotificationReasons:(NSUInteger)arg0 ;
-(id)initWithTraversalDirection:(NSUInteger)arg0 ;


@end


#endif