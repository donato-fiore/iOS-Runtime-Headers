// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLSHEETPHOTOALBUMIMAGEVIEW_H
#define SLSHEETPHOTOALBUMIMAGEVIEW_H

@class CALayer, NSMutableArray, UILabel;


#import "SLSheetImagePreviewView.h"

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {
    CALayer *_frameLayer;
    CALayer *_glossLayer;
    NSMutableArray *_frameViews;
    NSInteger _imageQuantity;
    NSInteger _numPreviewImagesAdded;
    UILabel *_imageCountLabel;
    BOOL _allAttachmentsAreImages;
}




+(NSUInteger)displayedFrameMaximum;
-(BOOL)_shouldDisplayImageCountLabel;
-(id)_itemCountString;
-(id)initWithPrincipalAttachments:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)addPreviewImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)setItemCountString:(id)arg0 ;
-(void)setPreviewImage:(id)arg0 forAttachment:(id)arg1 ;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif