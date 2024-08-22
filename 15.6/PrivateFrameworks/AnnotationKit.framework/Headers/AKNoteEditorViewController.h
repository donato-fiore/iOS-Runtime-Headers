// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKNOTEEDITORVIEWCONTROLLER_H
#define AKNOTEEDITORVIEWCONTROLLER_H

@class UIViewController, UITextView;
@protocol AKNoteEditorViewControllerDelegate;


#import "AKPopupAnnotation.h"

@interface AKNoteEditorViewController : UIViewController

@property (retain) AKPopupAnnotation *annotation; // ivar: _annotation
@property (weak, nonatomic) NSObject<AKNoteEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif