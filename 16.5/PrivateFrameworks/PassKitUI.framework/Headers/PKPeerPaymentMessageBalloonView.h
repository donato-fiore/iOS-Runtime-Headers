// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGEBALLOONVIEW_H
#define PKPEERPAYMENTMESSAGEBALLOONVIEW_H

@class UIView, CKTranscriptPluginBalloonView;


#import "PKPeerPaymentBubbleView.h"

@interface PKPeerPaymentMessageBalloonView : UIView

@property (retain, nonatomic) CKTranscriptPluginBalloonView *balloonView; // ivar: _balloonView
@property (readonly, nonatomic) PKPeerPaymentBubbleView *bubbleView; // ivar: _bubbleView
@property (readonly, nonatomic) NSInteger peerPaymentType; // ivar: _peerPaymentType


-(id)initWithBubbleView:(id)arg0 peerPaymentType:(NSInteger)arg1 ;
-(void)_updateTailOrientation;
-(void)layoutSubviews;


@end


#endif