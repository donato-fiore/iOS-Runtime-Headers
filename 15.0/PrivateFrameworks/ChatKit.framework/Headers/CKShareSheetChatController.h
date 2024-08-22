// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSHARESHEETCHATCONTROLLER_H
#define CKSHARESHEETCHATCONTROLLER_H



#import "CKComposeChatController.h"

@interface CKShareSheetChatController : CKComposeChatController {
    NSUInteger _interactionSignPost;
}


@property (nonatomic) BOOL alreadySetUp; // ivar: _alreadySetUp


-(BOOL)shouldDismissAfterSend;
-(void)_beginInteractionSignPost;
-(void)_endInteractionSignPost;
-(void)insertInitialCompositionIfNeeded;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)sendComposition:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif