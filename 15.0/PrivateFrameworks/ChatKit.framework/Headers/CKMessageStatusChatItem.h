// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGESTATUSCHATITEM_H
#define CKMESSAGESTATUSCHATITEM_H

@class NSAttributedString;


#import "CKChatItem.h"

@interface CKMessageStatusChatItem : CKChatItem

@property (readonly, nonatomic) BOOL allowsEffectAutoPlayback;
@property (readonly, nonatomic) CGSize buttonSize; // ivar: _buttonSize
@property (nonatomic, getter=isButtonSizeLoaded) BOOL buttonSizeLoaded; // ivar: _buttonSizeLoaded
@property (readonly, nonatomic) UIEdgeInsets buttonTextAlignmentInsets; // ivar: _buttonTextAlignmentInsets
@property (readonly, nonatomic) NSInteger buttonType;
@property (readonly, nonatomic) CGSize labelSize; // ivar: _labelSize
@property (nonatomic, getter=isLabelSizeLoaded) BOOL labelSizeLoaded; // ivar: _labelSizeLoaded
@property (readonly, nonatomic) UIEdgeInsets labelTextAlignmentInsets; // ivar: _labelTextAlignmentInsets
@property (readonly, nonatomic) BOOL shouldHideDuringDarkFSM;
@property (readonly, nonatomic) char statusAlignment;
@property (copy, nonatomic) NSAttributedString *transcriptButtonText; // ivar: _transcriptButtonText


+(id)createImageAsTextAttachment;
+(id)thePastDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)todayDateFormatter;
-(BOOL)isFromMe;
-(BOOL)wantsDrawerLayout;
-(Class)cellClass;
-(NSInteger)expireStatusType;
-(NSInteger)statusType;
-(NSUInteger)count;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)effectsControlStatusTextForEffectStyleID:(id)arg0 ;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptButtonText;
-(id)loadTranscriptText;
-(id)now;
-(id)time;
-(struct CGSize )loadButtonSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CGSize )loadLabelSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CGSize )size;
-(struct UIEdgeInsets )contentInsets;
-(struct UIEdgeInsets )transcriptTextAlignmentInsets;
-(void)unloadSize;
-(void)unloadTranscriptText;


@end


#endif