// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTPLUGINCHATITEM_H
#define CKTRANSCRIPTPLUGINCHATITEM_H

@class IMTranscriptPluginChatItem, NSString, NSArray;


#import "CKMessagePartChatItem.h"

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem

@property (readonly, nonatomic) IMTranscriptPluginChatItem *IMChatItem;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem; // ivar: _imTranscriptPluginChatItem
@property (nonatomic) BOOL isAppearing; // ivar: _isAppearing
@property (nonatomic) BOOL isBusiness; // ivar: _isBusiness
@property (readonly, nonatomic) BOOL isHandwriting; // ivar: _isHandwriting
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) BOOL wantsBalloonGradient;
@property (readonly, nonatomic) BOOL wantsOutline; // ivar: _wantsOutline
@property (readonly, nonatomic) BOOL wantsTranscriptGroupMonograms; // ivar: _wantsTranscriptGroupMonograms


+(CGFloat)resultingMaxWidthWithBalloonMaxWidth:(CGFloat)arg0 fullMaxWidth:(CGFloat)arg1 transcriptTraitCollection:(id)arg2 ;
-(BOOL)canCopy;
-(BOOL)canForward;
-(BOOL)canInlineReply;
-(BOOL)canPerformQuickAction;
-(BOOL)shouldAllowExtraTallHeightForBundleID:(id)arg0 ;
-(BOOL)shouldSnapshot;
-(Class)balloonViewClass;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)balloonControllerForContext:(id)arg0 ;
-(id)cellIdentifier;
-(id)compositionWithContext:(id)arg0 ;
-(id)contact;
-(id)contentViewControllerForContext:(id)arg0 ;
-(id)dragItemProvider;
-(id)extensibleViewControllerForContext:(id)arg0 ;
-(id)extensibleViewForContext:(id)arg0 ;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptDrawerText;
-(id)menuTitle;
-(id)message;
-(id)pluginDisplayContainerForContext:(id)arg0 ;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(id)sender;
-(id)snapshotGUIDForPluginPayload:(id)arg0 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;
-(struct UIEdgeInsets )textAlignmentInsets;
-(void)_cacheConversationID:(id)arg0 recipients:(id)arg1 isBusiness:(BOOL)arg2 ;
-(void)_configureBalloonController:(id)arg0 conversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 ;
-(void)configureWithConversationID:(id)arg0 recipients:(id)arg1 isBusiness:(BOOL)arg2 context:(id)arg3 ;
-(void)performHostAppResumeWithContext:(id)arg0 ;
-(void)releaseBalloonControllerIfNeededForContext:(id)arg0 ;
-(void)relinquishBalloonControllerForContext:(id)arg0 ;


@end


#endif