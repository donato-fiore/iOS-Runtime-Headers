// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMENTIONSUGGESTIONCELL_H
#define CKMENTIONSUGGESTIONCELL_H

@class UICollectionViewCell, UIView;


#import "CKAvatarView.h"
#import "CKLabel.h"
#import "CKEntity.h"

@interface CKMentionSuggestionCell : UICollectionViewCell

@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CKLabel *handleLabel; // ivar: _handleLabel
@property (retain, nonatomic) UIView *hoverView; // ivar: _hoverView
@property (retain, nonatomic) CKEntity *suggestedEntity; // ivar: _suggestedEntity


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didHoverOverCell:(id)arg0 ;


@end


#endif