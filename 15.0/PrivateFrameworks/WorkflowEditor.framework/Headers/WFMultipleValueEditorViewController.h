// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMULTIPLEVALUEEDITORVIEWCONTROLLER_H
#define WFMULTIPLEVALUEEDITORVIEWCONTROLLER_H

@class UIViewController;
@protocol WFComponentNavigationContext;


#import "WFMultipleValueEditorView.h"

@interface WFMultipleValueEditorViewController : UIViewController

@property (readonly, nonatomic) WFMultipleValueEditorView *editorView; // ivar: _editorView
@property (retain, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;


@end


#endif