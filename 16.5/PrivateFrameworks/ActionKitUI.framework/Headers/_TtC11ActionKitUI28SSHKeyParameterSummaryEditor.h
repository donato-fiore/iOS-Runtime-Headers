// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIONKITUI28SSHKEYPARAMETERSUMMARYEDITOR_H
#define _TTC11ACTIONKITUI28SSHKEYPARAMETERSUMMARYEDITOR_H

@class WFModuleSummaryEditor;



@interface _TtC11ActionKitUI28SSHKeyParameterSummaryEditor : WFModuleSummaryEditor {
    ? modal;
}




-(id)initWithParameter:(id)arg0 arrayIndex:(NSInteger)arg1 processing:(BOOL)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;


@end


#endif