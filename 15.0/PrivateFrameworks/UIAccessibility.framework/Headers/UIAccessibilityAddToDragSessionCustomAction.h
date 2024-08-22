// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYADDTODRAGSESSIONCUSTOMACTION_H
#define UIACCESSIBILITYADDTODRAGSESSIONCUSTOMACTION_H

@class UIAccessibilityCustomAction, UIView;



@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction {
    CGPoint _pt;
    UIView *_view;
}




-(BOOL)_accessibilityInvokeAddToSession;
-(id)_accessibilityCustomActionIdentifier;
-(id)initWithPoint:(struct CGPoint )arg0 inSourceView:(id)arg1 ;


@end


#endif