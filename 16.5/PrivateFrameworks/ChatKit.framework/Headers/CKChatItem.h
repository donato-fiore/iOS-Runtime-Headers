// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCHATITEM_H
#define CKCHATITEM_H

@class IMTranscriptChatItem, NSString, CNContact, UNNotification, IMHandle, NSAttributedString, UITraitCollection, NSArray;
@protocol CKTranscriptItemLayoutProvider;

#import <Foundation/Foundation.h>

#import "CKMessagePartHighlightChatItem.h"

@interface CKChatItem : NSObject <CKTranscriptItemLayoutProvider>



@property (retain, nonatomic) IMTranscriptChatItem *IMChatItem; // ivar: _imChatItem
@property (readonly, nonatomic) unsigned char attachmentContiguousType;
@property (readonly, nonatomic) CKBalloonDescriptor_t balloonDescriptor;
@property (readonly, nonatomic) BOOL canAttachStickers;
@property (readonly, nonatomic) BOOL canBeSelectedInEditMode;
@property (readonly, nonatomic) BOOL canCopy;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canEditMessageText;
@property (readonly, nonatomic) BOOL canExport;
@property (readonly, nonatomic) BOOL canForward;
@property (readonly, nonatomic) BOOL canInlineReply;
@property (readonly, nonatomic) BOOL canPerformQuickAction;
@property (readonly, nonatomic) BOOL canRetract;
@property (readonly, nonatomic) BOOL canSendAsTextMessage;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (readonly, nonatomic) Class chatItemClass;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) UIEdgeInsets contentInsets;
@property (readonly, nonatomic) unsigned char contiguousType;
@property (readonly, nonatomic) Class customLayoutGroupProviderClass; // ivar: _customLayoutGroupProviderClass
@property (readonly, nonatomic) BOOL displayDuringSend;
@property (readonly, nonatomic) BOOL hasTail;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) BOOL isEditedMessageHistory;
@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, copy, nonatomic) NSString *layoutGroupIdentifier;
@property (readonly, nonatomic) NSString *layoutGroupIdentifier;
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly, copy, nonatomic) NSString *menuTitle;
@property (readonly, nonatomic) CKMessagePartHighlightChatItem *messageHighlightChatItem;
@property (retain, nonatomic) UNNotification *notification; // ivar: _notification
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (nonatomic, getter=isSizeLoaded) BOOL sizeLoaded; // ivar: _sizeLoaded
@property (readonly, nonatomic) BOOL stickersSnapToPoint;
@property (readonly, nonatomic) BOOL supportsInlineReplyTransition;
@property (readonly, nonatomic) NSInteger syndicationBehavior;
@property (readonly, nonatomic) NSInteger syndicationType;
@property (readonly, nonatomic) UIEdgeInsets textAlignmentInsets; // ivar: _textAlignmentInsets
@property (copy, nonatomic) NSAttributedString *transcriptDrawerText; // ivar: _transcriptDrawerText
@property (retain, nonatomic) NSString *transcriptIdentifier; // ivar: _transcriptIdentifier
@property (readonly, nonatomic) char transcriptOrientation;
@property (copy, nonatomic) NSAttributedString *transcriptText; // ivar: _transcriptText
@property (readonly, nonatomic) UIEdgeInsets transcriptTextAlignmentInsets;
@property (retain, nonatomic) UITraitCollection *transcriptTraitCollection; // ivar: _transcriptTraitCollection
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems;
@property (readonly, nonatomic) BOOL wantsDrawerLayout;
@property (nonatomic) BOOL wantsOverlayLayout; // ivar: _wantsOverlayLayout
@property (readonly, nonatomic) BOOL wasDetonated;
@property (readonly, nonatomic) BOOL zOrder; // ivar: _zOrder


+(CGFloat)resultingMaxWidthWithBalloonMaxWidth:(CGFloat)arg0 fullMaxWidth:(CGFloat)arg1 transcriptTraitCollection:(id)arg2 ;
+(id)chatItemWithIMChatItem:(id)arg0 balloonMaxWidth:(CGFloat)arg1 fullMaxWidth:(CGFloat)arg2 transcriptTraitCollection:(id)arg3 overlayLayout:(BOOL)arg4 ;
+(id)chatItemWithNotification:(id)arg0 balloonMaxWidth:(CGFloat)arg1 fullMaxWidth:(CGFloat)arg2 ;
-(BOOL)canSave;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)itemIsFromMe;
-(BOOL)itemIsReply;
-(BOOL)itemIsReplyContextPreview;
-(BOOL)itemIsReplyCount;
-(BOOL)itemIsReplyFromMe;
-(BOOL)itemIsSameThreadAsOtherItem:(id)arg0 ;
-(BOOL)itemIsSensitive;
-(BOOL)itemIsThreadOriginator;
-(BOOL)previousPhotoActionItemIsOccluded:(NSUInteger)arg0 allDatasourceItems:(id)arg1 ;
-(BOOL)previousReplyCount:(NSUInteger)arg0 allDatasourceItems:(id)arg1 isOccludedForAssociatedSize:(struct CGSize )arg2 outMaxY:(*CGFloat)arg3 ;
-(CGFloat)_additionalBottomPaddingForChatItem:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 prevChatItem:(id)arg3 layoutEnvironment:(id)arg4 ;
-(CGFloat)_additionalTopPaddingForChatItem:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 prevChatItem:(id)arg3 layoutEnvironment:(id)arg4 ;
-(NSInteger)chatItemReplyLineContiguousTypeForChatStyle:(unsigned char)arg0 ;
-(NSUInteger)layoutType;
-(id)description;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)initWithNotification:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)layoutItemSpacingForReplyContextPreviewWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)layoutItemSpacingForReplyItemWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)layoutItemSpacingForReplyThreadOriginatorWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)layoutItemWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 ;
-(id)loadTranscriptDrawerText;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)unloadSize;
-(void)unloadTranscriptText;
-(void)updateWithBalloonMaxWidth:(CGFloat)arg0 fullMaxWidth:(CGFloat)arg1 transcriptTraitCollection:(id)arg2 ;


@end


#endif