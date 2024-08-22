// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACCESSIBILITYINTERFACESTYLEVISITOR_H
#define _UIACCESSIBILITYINTERFACESTYLEVISITOR_H

@class UIViewVisitor;


#import "UIView.h"

@interface _UIAccessibilityInterfaceStyleVisitor : UIViewVisitor {
    UIView *_originalVisitedView;
}




-(BOOL)_prepareVisitor:(id)arg0 toVisitView:(id)arg1 changedSubview:(id)arg2 previousWindow:(id)arg3 previousSuperview:(id)arg4 ;
-(BOOL)_visitView:(id)arg0 ;


@end


#endif