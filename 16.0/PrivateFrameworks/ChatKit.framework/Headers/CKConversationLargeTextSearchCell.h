// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONVERSATIONLARGETEXTSEARCHCELL_H
#define CKCONVERSATIONLARGETEXTSEARCHCELL_H

@class NSString;
@protocol CKConversationSearchCellProtocol, CKConversationSearchCellDelegate;


#import "CKConversationListLargeTextCell.h"

@interface CKConversationLargeTextSearchCell : CKConversationListLargeTextCell <CKConversationSearchCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationSearchCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (readonly) Class superclass;


+(id)annotatedResultStringWithSearchText:(id)arg0 resultText:(id)arg1 primaryTextColor:(id)arg2 primaryFont:(id)arg3 annotatedTextColor:(id)arg4 annotatedFont:(id)arg5 ;
-(BOOL)lastMessageIsTypingIndicator;
-(id)avatarView;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateUnreadIndicatorWithImage:(id)arg0 ;


@end


#endif