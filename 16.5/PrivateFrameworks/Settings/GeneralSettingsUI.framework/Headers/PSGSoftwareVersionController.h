// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGSOFTWAREVERSIONCONTROLLER_H
#define PSGSOFTWAREVERSIONCONTROLLER_H

@class PSListController, SUManagerClient, SUDocumentationData, NSString;
@protocol SUManagerClientDelegate;



@interface PSGSoftwareVersionController : PSListController <SUManagerClientDelegate>

 {
    SUManagerClient *_suClient;
    SUDocumentationData *_osDocumentationData;
    SUDocumentationData *_splatDocumentationData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)osUpdateDetailCellSpecifier;
-(id)osUpdateDetailGroup;
-(id)osUpdateLearnMoreButton;
-(id)specifiers;
-(id)splatRollbackButton;
-(id)splatUpdateDetailCellSpecifier;
-(id)splatUpdateDetailGroup;
-(id)splatUpdateLearnMoreButton;
-(void)client:(id)arg0 rollbackDidFail:(id)arg1 withError:(id)arg2 ;
-(void)client:(id)arg0 rollbackDidFinish:(id)arg1 ;
-(void)client:(id)arg0 rollbackDidStart:(id)arg1 ;
-(void)osLearnMoreTapped;
-(void)presentLearnMoreSheetForDocumentationData:(id)arg0 ;
-(void)releaseNotesDonePressed:(id)arg0 ;
-(void)removeSecurityResponse;
-(void)setPreparingRollback:(BOOL)arg0 ;
-(void)splatLearnMoreTapped;
-(void)viewDidLoad;


@end


#endif