// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTNEWMESSAGECELL_H
#define CKCONVERSATIONLISTNEWMESSAGECELL_H

@class UITableViewCell, UIButton;
@protocol CKConversationListCellDelegate;


#import "CKAvatarView.h"
#import "CKConversation.h"

@interface CKConversationListNewMessageCell : UITableViewCell {
    UIButton *_closeButton;
    CKAvatarView *_avatarView;
}


@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate; // ivar: _delegate


+(id)identifier;
-(BOOL)_boundsShouldCollapseContent:(struct CGRect )arg0 ;
-(BOOL)_isCollapsed;
-(BOOL)showingEditControl;
-(CGFloat)leadingLayoutMargin;
-(id)avatarView;
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