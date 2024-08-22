// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTSHARINGFOOTERVIEWCONTROLLER_H
#define CKTRANSCRIPTSHARINGFOOTERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UITextViewDelegate;


#import "CKChatController.h"

@interface CKTranscriptSharingFooterViewController : UIViewController <UITextViewDelegate>



@property (readonly, nonatomic) CKChatController *chatController; // ivar: _chatController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithChatController:(id)arg0 ;
-(void)loadView;


@end


#endif