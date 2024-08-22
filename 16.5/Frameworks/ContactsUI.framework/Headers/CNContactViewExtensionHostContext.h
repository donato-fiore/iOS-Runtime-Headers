// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTVIEWEXTENSIONHOSTCONTEXT_H
#define CNCONTACTVIEWEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol CNContactViewHostAsyncProtocol, CNContactViewServiceProtocol, CNContactViewHostProtocol;


#import "CNContactViewHostViewController.h"

@interface CNContactViewExtensionHostContext : NSExtensionContext <CNContactViewHostAsyncProtocol, CNContactViewServiceProtocol, CNContactViewHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) CNContactViewHostViewController *viewController; // ivar: _viewController


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg0 propertyKey:(id)arg1 propertyIdentifier:(id)arg2 ;
-(id)protocolService;
-(void)asyncShouldPerformDefaultActionForContact:(id)arg0 propertyKey:(id)arg1 propertyIdentifier:(id)arg2 ;
-(void)didChangePreferredContentSize:(struct CGSize )arg0 ;
-(void)didChangeToEditMode:(BOOL)arg0 ;
-(void)didChangeToShowTitle:(BOOL)arg0 ;
-(void)didCompleteWithContact:(id)arg0 ;
-(void)didDeleteContact:(id)arg0 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)editCancel;
-(void)isPresentingEditingController:(BOOL)arg0 ;
-(void)isPresentingFullscreen:(BOOL)arg0 ;
-(void)performConfirmedCancel;
-(void)presentCancelConfirmationAlert;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)toggleEditing;
-(void)updateEditing:(BOOL)arg0 doneButtonEnabled:(BOOL)arg1 doneButtonText:(id)arg2 ;
-(void)viewDidAppear;


@end


#endif