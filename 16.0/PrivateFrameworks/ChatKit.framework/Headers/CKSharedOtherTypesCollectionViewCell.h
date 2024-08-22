// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSHAREDOTHERTYPESCOLLECTIONVIEWCELL_H
#define CKSHAREDOTHERTYPESCOLLECTIONVIEWCELL_H

@class UIImageView;


#import "CKSharedContentsCollectionViewCell.h"

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView


+(id)reuseIdentifier;
-(void)configureWithAttachmentItem:(id)arg0 ;
-(void)configureWithThumbnail:(id)arg0 fileURL:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif