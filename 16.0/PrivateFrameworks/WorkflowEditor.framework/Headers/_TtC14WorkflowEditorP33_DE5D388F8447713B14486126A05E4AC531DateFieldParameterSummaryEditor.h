// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWEDITORP33_DE5D388F8447713B14486126A05E4AC531DATEFIELDPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITORP33_DE5D388F8447713B14486126A05E4AC531DATEFIELDPARAMETERSUMMARYEDITOR_H

@class TtC14WorkflowEditor31TextInputParameterSummaryEditor;
@protocol WFParameterEventObserver;



@interface _TtC14WorkflowEditorP33_DE5D388F8447713B14486126A05E4AC531DateFieldParameterSummaryEditor : TtC14WorkflowEditor31TextInputParameterSummaryEditor <WFParameterEventObserver>

 {
    ? $__lazy_storage_$_hintDateFormatter;
}




-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(void)parameterAttributesDidChange:(id)arg0 ;
-(void)textEntryDidFinish;
-(void)textEntryTextDidChange:(id)arg0 ;
-(void)textEntryWillBegin:(id)arg0 allowMultipleLines:(*BOOL)arg1 ;


@end


#endif