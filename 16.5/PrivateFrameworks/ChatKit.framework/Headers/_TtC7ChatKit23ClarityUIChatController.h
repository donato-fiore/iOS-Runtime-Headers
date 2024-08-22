// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7CHATKIT23CLARITYUICHATCONTROLLER_H
#define _TTC7CHATKIT23CLARITYUICHATCONTROLLER_H



#import "CKChatController.h"
#import "CKComposition.h"

@interface _TtC7ChatKit23ClarityUIChatController : CKChatController {
    ? clarityUIDelegate;
    ? sendCompositionPublisher;
    ? navigationBarTopInset;
    ? sendCompositionPublisherSubscriber;
}


@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, readonly) BOOL shouldDisplayTextEntry;


+(Class)transcriptControllerClass;
-(BOOL)_clickyOrbEnabled;
-(id)_actionsToolbar;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversation:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct UIEdgeInsets )navigationBarInsetsWithoutPalette;


@end


#endif