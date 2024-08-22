// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONSEARCHRESULTCELL_H
#define CKCONVERSATIONSEARCHRESULTCELL_H

@class UICollectionViewCell, NSString;
@protocol CNAvatarViewDelegate, CKSearchResultCell;


#import "CKAvatarView.h"
#import "CKConversation.h"
#import "CKLabel.h"

@interface CKConversationSearchResultCell : UICollectionViewCell <CNAvatarViewDelegate, CKSearchResultCell>



@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // ivar: _ck_editing
@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (retain, nonatomic) CKLabel *nameLabel; // ivar: _nameLabel
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(void)_configureAvatarViewForConversation:(id)arg0 ;
-(void)_configureNameLabelForConversation:(id)arg0 searchText:(id)arg1 ;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshForSearchTextIfNeeded:(id)arg0 ;


@end


#endif