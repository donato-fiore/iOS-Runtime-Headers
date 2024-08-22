// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDICTIONARYEDITORCOMPONENTCONTROLLER_H
#define WFDICTIONARYEDITORCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFListEditorViewDelegate;


#import "CKStatefulViewComponentController.h"
#import "WFDictionaryEditorView.h"
#import "WFListEditingContext.h"

@interface WFDictionaryEditorComponentController : CKStatefulViewComponentController <WFListEditorViewDelegate>

 {
    WFDictionaryEditorView *_viewForSizing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFListEditingContext *editingContext; // ivar: _editingContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forComponent:(id)arg1 ;
-(void)componentTreeDidDisappear;
-(void)componentTreeWillAppear;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)listEditorView:(id)arg0 didUpdateWithItem:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif