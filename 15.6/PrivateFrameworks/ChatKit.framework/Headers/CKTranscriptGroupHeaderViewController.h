// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTGROUPHEADERVIEWCONTROLLER_H
#define CKTRANSCRIPTGROUPHEADERVIEWCONTROLLER_H

@class UIButton;


#import "CKTranscriptHeaderViewController.h"

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (readonly, nonatomic) UIButton *headerButton;


-(BOOL)shouldInvalidateOnAddressBookChange;
-(id)_groupHeaderComposeRecipients;
-(void)_handleConversationRecipientsChanged:(id)arg0 ;
-(void)dealloc;
-(void)loadView;


@end


#endif