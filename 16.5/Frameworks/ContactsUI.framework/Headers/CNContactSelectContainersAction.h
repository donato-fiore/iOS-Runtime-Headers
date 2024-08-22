// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSELECTCONTAINERSACTION_H
#define CNCONTACTSELECTCONTAINERSACTION_H

@class NSString;
@protocol CNContactContainerPickerViewControllerDelegate;


#import "CNContactAction.h"
#import "CNUIContainerContext.h"
#import "CNContactContainerPickerViewController.h"

@interface CNContactSelectContainersAction : CNContactAction <CNContactContainerPickerViewControllerDelegate>



@property (retain, nonatomic) CNUIContainerContext *containerContext; // ivar: _containerContext
@property (retain, nonatomic) CNContactContainerPickerViewController *containerPicker; // ivar: _containerPicker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containerPicker:(id)arg0 shouldAllowDeselectionOfContainerWithIdentifier:(id)arg1 ;
-(void)cleanupForDismissal;
-(void)containerPicker:(id)arg0 didFinishWithPickedContainers:(id)arg1 ;
-(void)performActionWithContainerContext:(id)arg0 ;


@end


#endif