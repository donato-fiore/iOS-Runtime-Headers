// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAVATARCOLLECTIONVIEWCELL_H
#define CKAVATARCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;


#import "CKAvatarView.h"

@interface CKAvatarCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithEntity:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif