// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKINLINEREPLYCOLLECTIONVIEWCONTROLLER_H
#define CKINLINEREPLYCOLLECTIONVIEWCONTROLLER_H

@class NSDictionary;


#import "CKTranscriptCollectionViewController.h"

@interface CKInlineReplyCollectionViewController : CKTranscriptCollectionViewController

@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn; // ivar: _animatingIn
@property (nonatomic, getter=isAnimatingOut) BOOL animatingOut; // ivar: _animatingOut
@property (retain, nonatomic) NSDictionary *currentFrameMapForNextReload; // ivar: _currentFrameMapForNextReload
@property (retain, nonatomic) NSDictionary *targetFrameMapForAnimateOut; // ivar: _targetFrameMapForAnimateOut


+(id)chatItemsDidChangeNotification;
-(BOOL)_canUseOpaqueMask;
-(BOOL)isInline;
-(BOOL)isModal;
-(id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)imChatItems;
-(id)initWithConversation:(id)arg0 delegate:(id)arg1 notifications:(id)arg2 balloonMaxWidth:(CGFloat)arg3 marginInsets:(struct UIEdgeInsets )arg4 ;
-(id)overrideCurrentFrameMapForLayout:(id)arg0 ;
-(id)overrideTargetFrameMapForLayout:(id)arg0 ;
-(id)transcriptBackgroundColor;
-(void)configureCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadEarlierMessagesForConversation;
-(void)loadRecentMessagesForConversation;
-(void)setCollectionViewCurrentFrames:(id)arg0 ;
-(void)setCollectionViewTargetFrames:(id)arg0 ;
-(void)setScrollAnchor:(CGFloat)arg0 ;
-(void)viewDidAppearDeferredSetup;


@end


#endif