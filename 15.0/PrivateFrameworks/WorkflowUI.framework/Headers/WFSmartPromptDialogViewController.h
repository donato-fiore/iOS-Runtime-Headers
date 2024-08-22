// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSMARTPROMPTDIALOGVIEWCONTROLLER_H
#define WFSMARTPROMPTDIALOGVIEWCONTROLLER_H

@class NSArray, WFContentCollection, NSString, UIStackView;
@protocol QLPreviewControllerDelegate;


#import "WFCompactDialogViewController.h"

@interface WFSmartPromptDialogViewController : WFCompactDialogViewController <QLPreviewControllerDelegate>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) WFContentCollection *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIStackView *sourceDestinationView; // ivar: _sourceDestinationView
@property (readonly) Class superclass;


-(void)finishWithResult:(NSUInteger)arg0 ;
-(void)loadContentCollection;
-(void)loadView;


@end


#endif