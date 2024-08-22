// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGESCONTENTRENDERBUBBLEVIEWCONTROLLER_H
#define PKPEERPAYMENTMESSAGESCONTENTRENDERBUBBLEVIEWCONTROLLER_H



#import "PKPeerPaymentMessagesContentBaseViewController.h"
#import "PKPeerPaymentBubbleView.h"
#import "PKPeerPaymentMessage.h"

@interface PKPeerPaymentMessagesContentRenderBubbleViewController : PKPeerPaymentMessagesContentBaseViewController {
    PKPeerPaymentBubbleView *_bubbleView;
    PKPeerPaymentMessage *_currentMessage;
    BOOL _remoteFetchInProgress;
    CGSize _pendingBubbleViewSize;
}




-(BOOL)_isMessage:(id)arg0 validForTransaction:(id)arg1 ;
-(BOOL)_isMessageFromMe:(id)arg0 ;
-(id)bubbleView;
-(id)generatedSnapshot;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(void)_bubbleViewDoubleTapped;
-(void)_bubbleViewLongPressed;
-(void)_bubbleViewPanned;
-(void)_bubbleViewSelected;
-(void)_fetchStatus;
-(void)_resizeBubbleViewToReferenceSizeAnimated;
-(void)_resizeBubbleViewToSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)reloadContent;


@end


#endif