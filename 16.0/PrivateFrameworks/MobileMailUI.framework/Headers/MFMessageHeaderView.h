// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEHEADERVIEW_H
#define MFMESSAGEHEADERVIEW_H

@class UIStackView, NSString, NSArray;
@protocol MFReusable, ConversationSearchOverlayAdding, MFMessageHeaderViewDelegate;


#import "MFMessageDisplayMetrics.h"
#import "ConversationSearchOverlayView.h"
#import "MFMessageHeaderViewBlock.h"
#import "MessageHeaderViewModel.h"

@interface MFMessageHeaderView : UIStackView <MFReusable, ConversationSearchOverlayAdding>



@property (nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge; // ivar: _bottomSeparatorDrawsFlushWithLeadingEdge
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFMessageHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (nonatomic) CGRect draggableArea; // ivar: _draggableArea
@property (retain, nonatomic) ConversationSearchOverlayView *findOverlayView; // ivar: _findOverlayView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *headerBlocks; // ivar: _headerBlocks
@property (retain, nonatomic) MFMessageHeaderViewBlock *pinnedBlock; // ivar: _pinnedBlock
@property (readonly) Class superclass;
@property (retain, nonatomic) MessageHeaderViewModel *viewModel; // ivar: _viewModel


-(BOOL)_blockHasWhiteOrClearBackground:(id)arg0 ;
-(id)_animationConstraintsForBlockAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutAnimatedWithCompletion:(id)arg0 ;
-(void)_updateSeparators;
-(void)addConversationSearchOverlay;
-(void)addHeaderBlock:(id)arg0 animated:(BOOL)arg1 ;
-(void)displayMessageUsingViewModel:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 forViewPrintFormatter:(id)arg1 ;
-(void)insertHeaderBlock:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeAllHeaderBlocksAnimated:(BOOL)arg0 ;
-(void)removeConversationSearchOverlay;
-(void)removeHeaderBlock:(id)arg0 animated:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setMessageFlags:(NSUInteger)arg0 conversationFlags:(NSUInteger)arg1 ;


@end


#endif