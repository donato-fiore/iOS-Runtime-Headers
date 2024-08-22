// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTVIEWSERVICEERRORVIEWCONTROLLER_H
#define CNCONTACTVIEWSERVICEERRORVIEWCONTROLLER_H

@class NSString;
@protocol CNContactContentViewController, CNContactViewHostProtocol, CNContactViewControllerPPTDelegate;


#import "CNErrorViewController.h"

@interface CNContactViewServiceErrorViewController : CNErrorViewController <CNContactContentViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactViewHostProtocol> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CNContactViewControllerPPTDelegate> *pptDelegate; // ivar: pptDelegate
@property (readonly) Class superclass;


-(void)didChangeToEditMode:(BOOL)arg0 ;
-(void)didChangeToShowTitle:(BOOL)arg0 ;
-(void)editCancel;
-(void)performConfirmedCancel;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)toggleEditing;


@end


#endif