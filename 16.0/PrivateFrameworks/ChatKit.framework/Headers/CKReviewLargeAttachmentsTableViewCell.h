// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKREVIEWLARGEATTACHMENTSTABLEVIEWCELL_H
#define CKREVIEWLARGEATTACHMENTSTABLEVIEWCELL_H

@class UIImageView;


#import "CKAbstractReviewTableViewCell.h"
#import "CKAttachmentItem.h"

@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell

@property (retain, nonatomic) CKAttachmentItem *attachmentItem; // ivar: _attachmentItem
@property (retain, nonatomic) UIImageView *previewView; // ivar: _previewView


+(CGFloat)requestedHeight;
+(struct CGSize )leftHandSideViewSize;
-(id)leftHandSideView;
-(void)_updateImageViewForAttachmentItem;
-(void)prepareForReuse;
-(void)setModelObject:(id)arg0 ;


@end


#endif