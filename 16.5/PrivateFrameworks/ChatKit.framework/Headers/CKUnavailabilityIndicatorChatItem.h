// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUNAVAILABILITYINDICATORCHATITEM_H
#define CKUNAVAILABILITYINDICATORCHATITEM_H

@class IMUnavailabilityIndicatorChatItem, NSAttributedString;


#import "CKChatItem.h"

@interface CKUnavailabilityIndicatorChatItem : CKChatItem

@property (readonly, nonatomic) BOOL displayNotifyAnywayButton;
@property (readonly, nonatomic) IMUnavailabilityIndicatorChatItem *imUnavailabilityIndicatorChatItem;
@property (retain, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton; // ivar: _unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton
@property (retain, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton; // ivar: _unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton


-(BOOL)displayDuringSend;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)_unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton:(BOOL)arg0 ;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;
-(void)_loadUnavailableTitleLabelTextVariants;
-(void)unloadTranscriptText;


@end


#endif