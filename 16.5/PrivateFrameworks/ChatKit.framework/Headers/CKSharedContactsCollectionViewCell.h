// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSHAREDCONTACTSCOLLECTIONVIEWCELL_H
#define CKSHAREDCONTACTSCOLLECTIONVIEWCELL_H

@class CNAvatarView;


#import "CKSharedContentsCollectionViewCell.h"

@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView


+(id)reuseIdentifier;
-(void)configureWithContact:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif