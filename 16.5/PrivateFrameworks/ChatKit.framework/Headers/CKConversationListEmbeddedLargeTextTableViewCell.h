// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONLISTEMBEDDEDLARGETEXTTABLEVIEWCELL_H
#define CKCONVERSATIONLISTEMBEDDEDLARGETEXTTABLEVIEWCELL_H

@class NSString;
@protocol CKConversationListEmbeddedTableViewCellProtocol, CKConversationListCellDelegate;


#import "CKConversationListLargeTextCell.h"

@interface CKConversationListEmbeddedLargeTextTableViewCell : CKConversationListLargeTextCell <CKConversationListEmbeddedTableViewCellProtocol>



@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(BOOL)avatarView:(id)arg0 shouldShowContact:(id)arg1 ;
-(id)avatarView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg0 forConversation:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif