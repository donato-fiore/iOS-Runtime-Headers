// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGSOFTWAREVERSIONCONTROLLER_H
#define PSGSOFTWAREVERSIONCONTROLLER_H

@class PSListController, SUManagerClient, SUDocumentationData;



@interface PSGSoftwareVersionController : PSListController {
    SUManagerClient *_suClient;
    SUDocumentationData *_osDocumentationData;
    SUDocumentationData *_splatDocumentationData;
}




-(id)osUpdateDetailCellSpecifier;
-(id)osUpdateDetailGroup;
-(id)osUpdateLearnMoreButton;
-(id)specifiers;
-(id)splatRollbackButton;
-(id)splatUpdateDetailCellSpecifier;
-(id)splatUpdateDetailGroup;
-(id)splatUpdateLearnMoreButton;
-(void)osLearnMoreTapped;
-(void)presentLearnMoreSheetForDocumentationData:(id)arg0 ;
-(void)releaseNotesDonePressed:(id)arg0 ;
-(void)removeUpdate;
-(void)splatLearnMoreTapped;


@end


#endif