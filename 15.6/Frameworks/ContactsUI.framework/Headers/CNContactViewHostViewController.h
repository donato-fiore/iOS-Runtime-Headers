// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTVIEWHOSTVIEWCONTROLLER_H
#define CNCONTACTVIEWHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, NSExtension;
@protocol CNContactContentViewController, CNContactViewHostProtocol, NSCopying, CNContactViewControllerPPTDelegate;



@interface CNContactViewHostViewController : UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol>



@property (retain, nonatomic) NSObject<NSCopying> *currentRequestIdentifier; // ivar: _currentRequestIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactViewHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CNContactViewControllerPPTDelegate> *pptDelegate; // ivar: _pptDelegate
@property (readonly) Class superclass;


+(BOOL)getViewController:(id)arg0 ;
+(id)contactViewExtension;
+(id)contextForIdentifier:(id)arg0 ;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg0 propertyKey:(id)arg1 propertyIdentifier:(id)arg2 ;
-(id)protocolContext;
-(void)didChangePreferredContentSize:(struct CGSize )arg0 ;
-(void)didChangeToEditMode:(BOOL)arg0 ;
-(void)didChangeToShowTitle:(BOOL)arg0 ;
-(void)didCompleteWithContact:(id)arg0 ;
-(void)didDeleteContact:(id)arg0 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)editCancel;
-(void)invalidate;
-(void)isPresentingEditingController:(BOOL)arg0 ;
-(void)isPresentingFullscreen:(BOOL)arg0 ;
-(void)performConfirmedCancel;
-(void)presentCancelConfirmationAlert;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)toggleEditing;
-(void)updateEditing:(BOOL)arg0 doneButtonEnabled:(BOOL)arg1 doneButtonText:(id)arg2 ;
-(void)viewDidAppear;
-(void)viewServiceDidTerminate;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif