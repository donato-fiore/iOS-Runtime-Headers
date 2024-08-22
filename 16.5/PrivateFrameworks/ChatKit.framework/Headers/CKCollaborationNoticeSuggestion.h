// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCOLLABORATIONNOTICESUGGESTION_H
#define CKCOLLABORATIONNOTICESUGGESTION_H

@class NSString, IMCollaborationNotice;
@protocol SGSuggestionCategory, SGSuggestionList, SGSuggestion, CKCollaborationNoticeSuggestionDelegate, SGSuggestionDelegate;

#import <Foundation/Foundation.h>

#import "CKEntity.h"

@interface CKCollaborationNoticeSuggestion : NSObject <SGSuggestionCategory, SGSuggestionList, SGSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKCollaborationNoticeSuggestionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IMCollaborationNotice *notice; // ivar: _notice
@property (readonly, nonatomic) CKEntity *senderEntity; // ivar: _senderEntity
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsInlineReplyStyle; // ivar: _wantsInlineReplyStyle


+(id)suggestionWithNotice:(id)arg0 delegate:(id)arg1 wantsInlineReplyStyle:(BOOL)arg2 ;
-(BOOL)suggestionListSupportsDismissal;
-(NSInteger)aggregateCollaborationNoticeTypeForItems:(id)arg0 ;
-(NSInteger)suggestionActionButtonType;
-(id)aggregateUTTypeForItems:(id)arg0 withAggregateNoticeType:(NSInteger)arg1 ;
-(id)collaborationNoticeSuggestionsForItems:(id)arg0 ;
-(id)collaborationTitleForUTType:(id)arg0 numberOfFiles:(NSInteger)arg1 ;
-(id)initWithNotice:(id)arg0 wantsInlineReplyStyle:(BOOL)arg1 ;
-(id)suggestionBackgroundVisualEffectView;
-(id)suggestionCategory;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitleWithSenderName:(id)arg0 documentTitle:(id)arg1 noticeType:(NSInteger)arg2 ;
-(id)suggestionCategoryTitleWithSenderName:(id)arg0 numberOfFiles:(NSInteger)arg1 numberOfItems:(NSInteger)arg2 aggregateContentType:(id)arg3 aggregateNoticeType:(NSInteger)arg4 ;
-(id)suggestionDismissAction;
-(id)suggestionDivider;
-(id)suggestionHandlesForItems:(id)arg0 ;
-(id)suggestionImageSGView;
-(id)suggestionList;
-(id)suggestionListTitle;
-(id)suggestionPrimaryAction;
-(id)suggestionSubtitle;
-(id)suggestionTitle;
-(id)suggestionURLsForItems:(id)arg0 ;


@end


#endif