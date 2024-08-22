// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORCOMBINEDROOTVIEWCONTROLLER_H
#define PREDITORCOMBINEDROOTVIEWCONTROLLER_H

@protocol PREditingLookViewProviding;


#import "PREditorRootViewController.h"

@interface PREditorCombinedRootViewController : PREditorRootViewController

@property (retain, nonatomic) NSObject<PREditingLookViewProviding> *views; // ivar: _views


-(void)loadView;


@end


#endif