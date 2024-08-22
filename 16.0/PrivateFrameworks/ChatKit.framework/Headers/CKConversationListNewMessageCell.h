// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONVERSATIONLISTNEWMESSAGECELL_H
#define CKCONVERSATIONLISTNEWMESSAGECELL_H

@class UITableViewCell, UIButton, NSString;
@protocol CKConversationListCellLayoutConfigurable, CKConversationListCellDelegate;


#import "CKAvatarView.h"
#import "CKConversationListCellLayout.h"
#import "CKConversation.h"

@interface CKConversationListNewMessageCell : UITableViewCell <CKConversationListCellLayoutConfigurable>



@property (readonly, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout; // ivar: _cellLayout
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)identifier;
-(BOOL)_boundsShouldCollapseContent:(struct CGRect )arg0 ;
-(BOOL)_isCollapsed;
-(BOOL)showingEditControl;
-(CGFloat)leadingLayoutMargin;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateLabelVisibility;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)deleteButtonTapped;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateFontSize;
-(void)updateWithForwardedConfigurationState:(NSUInteger)arg0 ;


@end


#endif