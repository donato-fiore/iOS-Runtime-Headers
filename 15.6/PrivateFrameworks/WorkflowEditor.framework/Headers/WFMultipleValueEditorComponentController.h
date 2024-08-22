// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMULTIPLEVALUEEDITORCOMPONENTCONTROLLER_H
#define WFMULTIPLEVALUEEDITORCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFMultipleValueEditorViewDelegate;


#import "CKStatefulViewComponentController.h"
#import "WFMultipleValueEditorView.h"
#import "WFMultipleValueEditingContext.h"

@interface WFMultipleValueEditorComponentController : CKStatefulViewComponentController <WFMultipleValueEditorViewDelegate>

 {
    WFMultipleValueEditorView *_viewForSizing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFMultipleValueEditingContext *editingContext; // ivar: _editingContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forComponent:(id)arg1 ;
-(void)componentTreeDidDisappear;
-(void)componentTreeWillAppear;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)multipleValueEditorView:(id)arg0 didUpdateWithItem:(id)arg1 ;
-(void)multipleValueEditorView:(id)arg0 needsConfirmationForDeletion:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif