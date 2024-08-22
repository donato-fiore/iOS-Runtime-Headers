// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSADDPARTICIPANTSVIEWCONTROLLER_H
#define CSADDPARTICIPANTSVIEWCONTROLLER_H

@class UIViewController, _UIResilientRemoteViewContainerViewController, NSArray, CKContainerSetupInfo, NSString, NSURL, CKShare;
@protocol CNContactPickerDelegate, CSAddParticipantsPublicController, CSAddParticipantsViewControllerDelegate;


#import "CSAddressingViewModel.h"

@interface CSAddParticipantsViewController : UIViewController <CNContactPickerDelegate, CSAddParticipantsPublicController>



@property (retain, nonatomic) CSAddressingViewModel *addressingViewModel; // ivar: _addressingViewModel
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *childViewController; // ivar: _childViewController
@property (retain, nonatomic) NSArray *collaborationOptionsGroups; // ivar: _collaborationOptionsGroups
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAddParticipantsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (readonly) Class superclass;


-(id)initWithCKShare:(id)arg0 containerSetupInfo:(id)arg1 fileURL:(id)arg2 collaborationOptionsGroups:(id)arg3 headerImageData:(id)arg4 headerTitle:(id)arg5 loadingText:(id)arg6 supplementaryText:(id)arg7 primaryButtonText:(id)arg8 secondaryButtonText:(id)arg9 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)dismissViewControllerWithError:(id)arg0 shareURL:(id)arg1 ckShare:(id)arg2 ;
-(void)embedViewController:(id)arg0 ;
-(void)showContactPickerFromSourceRect:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif