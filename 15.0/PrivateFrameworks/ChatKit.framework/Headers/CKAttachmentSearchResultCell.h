// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATTACHMENTSEARCHRESULTCELL_H
#define CKATTACHMENTSEARCHRESULTCELL_H

@class UIDateLabel, NSString, UILabel;
@protocol CKSearchResultCell;


#import "CKEditableSearchResultCell.h"
#import "CKSearchAvatarSupplementryView.h"

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>



@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly, nonatomic) CGPoint avatarOffsetLTR;
@property (readonly, nonatomic) CGPoint avatarOffsetRTL;
@property (retain, nonatomic) CKSearchAvatarSupplementryView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIDateLabel *dateLabel; // ivar: _dateLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat editModeHorizontalOffset;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAvatars; // ivar: _suppressAvatars
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_thumbnailGenerated:(id)arg0 ;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshForSearchTextIfNeeded:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif