// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREVIEWLARGECONVERSATIONSTABLEVIEWCELL_H
#define CKREVIEWLARGECONVERSATIONSTABLEVIEWCELL_H

@class CNAvatarView, IMChat;


#import "CKAbstractReviewTableViewCell.h"

@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell

@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) IMChat *chat; // ivar: _chat


+(CGFloat)requestedHeight;
+(struct CGSize )leftHandSideViewSize;
-(id)leftHandSideView;
-(void)prepareForReuse;
-(void)setModelObject:(id)arg0 ;


@end


#endif