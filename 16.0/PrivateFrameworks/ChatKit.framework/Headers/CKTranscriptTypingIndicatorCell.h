// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTTYPINGINDICATORCELL_H
#define CKTRANSCRIPTTYPINGINDICATORCELL_H

@class CALayer<IMTypingIndicatorLayerProtocol>;
@protocol CKLayerDelegate;


#import "CKTranscriptMessageCell.h"
#import "CKTypingView.h"

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell <CKLayerDelegate>



@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;
@property (retain, nonatomic) CKTypingView *typingView; // ivar: _typingView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)ckLayerDidBecomeVisible:(BOOL)arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;
-(void)performRemoval:(id)arg0 ;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg0 ;
-(void)setTraitCollection:(id)arg0 ;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)startShrinkAnimation;
-(void)stopPulseAnimation;


@end


#endif