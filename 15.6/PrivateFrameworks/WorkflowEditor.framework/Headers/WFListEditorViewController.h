// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLISTEDITORVIEWCONTROLLER_H
#define WFLISTEDITORVIEWCONTROLLER_H

@class UIViewController;
@protocol WFComponentNavigationContext;


#import "WFListEditorView.h"

@interface WFListEditorViewController : UIViewController

@property (readonly, nonatomic) WFListEditorView *editorView; // ivar: _editorView
@property (retain, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)done;


@end


#endif