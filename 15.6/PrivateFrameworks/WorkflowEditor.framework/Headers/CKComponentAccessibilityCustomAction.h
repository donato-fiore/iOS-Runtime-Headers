// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTACCESSIBILITYCUSTOMACTION_H
#define CKCOMPONENTACCESSIBILITYCUSTOMACTION_H

@class UIAccessibilityCustomAction, UIView;



@interface CKComponentAccessibilityCustomAction : UIAccessibilityCustomAction {
    UIView *_ck_view;
    CKTypedComponentAction<> _ck_action;
}




-(BOOL)ck_send;
-(id)initWithName:(id)arg0 action:(struct CKTypedComponentAction<> )arg1 view:(id)arg2 ;


@end


#endif