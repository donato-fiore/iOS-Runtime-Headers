// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14WORKFLOWUICOREP33_ADA1693FF2F04294CDA6C6AEEFEF892F13UIKITTEXTVIEW_H
#define _TTC14WORKFLOWUICOREP33_ADA1693FF2F04294CDA6C6AEEFEF892F13UIKITTEXTVIEW_H

@class UITextView;



@interface _TtC14WorkflowUICoreP33_ADA1693FF2F04294CDA6C6AEEFEF892F13UIKitTextView : UITextView {
    ? allowsMultipleLines;
    ? statistics;
    ? pasteboardDelegate;
}


@property (nonatomic) BOOL scrollEnabled;


-(BOOL)isScrollEnabled;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)paste:(id)arg0 ;
-(void)processedEditing;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif