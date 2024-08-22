// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDEDITORCONTROLLER_H
#define TSDEDITORCONTROLLER_H

@class NSMutableArray, NSMutableDictionary;
@protocol TSDEditor;

#import <Foundation/Foundation.h>

#import "TSKDocumentRoot.h"

@interface TSDEditorController : NSObject {
    TSKDocumentRoot *mDocumentRoot;
    NSMutableArray *mEditorStack;
    NSObject<TSDEditor> *mTextInputEditor;
    NSUInteger mTransactionLevel;
    BOOL mDidChangeTextInputEditor;
    BOOL mDidChangeCurrentEditors;
    BOOL mNotifiedWillChangeTextInputEditor;
    BOOL mNotifiedWillChangeCurrentEditors;
    BOOL mIsReentrantResigningTextInputEditors;
    NSMutableArray *mResignedTextInputEditors;
    NSMutableDictionary *mInspectorPropertyValueMap;
    NSUInteger mChangingCurrentEditorsWhenCommittingInspectorChangesCount;
}


@property (readonly, nonatomic, getter=isChangingCurrentEditorsWhenCommittingInspectorChanges) BOOL changingCurrentEditorsWhenCommittingInspectorChanges;


-(BOOL)anyEditorProhibitsAction:(SEL)arg0 ;
-(id)currentEditors;
-(id)currentEditorsConformingToProtocol:(id)arg0 ;
-(id)currentEditorsOfClass:(Class)arg0 ;
-(id)editorForEditAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)editorForEditAction:(SEL)arg0 withSender:(id)arg1 response:(*int)arg2 ;
-(id)init;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)mostSpecificCurrentEditorOfClass:(Class)arg0 ;
-(id)mostSpecificCurrentEditorOfClass:(Class)arg0 conformingToProtocol:(id)arg1 ;
-(id)mostSpecificEditorConformingToProtocol:(id)arg0 ;
-(id)objectForInspectorPropertyKey:(id)arg0 ;
-(id)textInputEditor;
-(void)beginTransaction;
-(void)dealloc;
-(void)didChangeCurrentEditorsWhenCommittingInspectorChanges;
-(void)editorDidChangeSelection:(id)arg0 withSelectionFlags:(NSUInteger)arg1 ;
-(void)editorDidChangeSelectionAndWantsKeyboard:(id)arg0 withSelectionFlags:(NSUInteger)arg1 ;
-(void)editorSelectionWasForciblyChanged:(id)arg0 ;
-(void)endTransaction;
-(void)enumerateEditorsOnStackUsingBlock:(id)arg0 ;
-(void)notifyResignedTextInputEditors;
-(void)p_didChangeCurrentEditors;
-(void)p_didChangeTextInputEditor;
-(void)p_setTextInputEditor:(id)arg0 ;
-(void)p_willChangeCurrentEditors;
-(void)p_willChangeCurrentEditorsWithNewEditors:(id)arg0 ;
-(void)p_willChangeTextInputEditor;
-(void)popEditor:(id)arg0 ;
-(void)popEditor:(id)arg0 andPushTextInputEditor:(id)arg1 ;
-(void)popToEditor:(id)arg0 ;
-(void)pushEditor:(id)arg0 ;
-(void)removeObjectForInspectorPropertyKey:(id)arg0 ;
-(void)setObject:(id)arg0 forInspectorPropertyKey:(id)arg1 ;
-(void)setTextInputEditor:(id)arg0 ;
-(void)teardown;
-(void)willChangeCurrentEditorsWhenCommittingInspectorChanges;


@end


#endif