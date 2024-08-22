// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICGALLERYATTACHMENTVIEWCOLLECTIONVIEWLAYOUT_H
#define ICGALLERYATTACHMENTVIEWCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, ICAttachmentGalleryModel, NSArray;



@interface ICGalleryAttachmentViewCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) ICAttachmentGalleryModel *attachmentModel; // ivar: _attachmentModel
@property (nonatomic) CGSize cachedContentSize; // ivar: _cachedContentSize
@property (copy, nonatomic) NSArray *itemAttributes; // ivar: _itemAttributes
@property (nonatomic) CGFloat itemHeight; // ivar: _itemHeight
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (nonatomic) CGSize margins; // ivar: _margins


+(CGFloat)contentWidthForAttachmentGalleryModel:(id)arg0 itemHeight:(CGFloat)arg1 itemSpacing:(CGFloat)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)initWithAttachmentGalleryModel:(id)arg0 itemHeight:(CGFloat)arg1 itemSpacing:(CGFloat)arg2 margins:(struct CGSize )arg3 ;
-(void)invalidateLayoutWithNewItemHeight:(CGFloat)arg0 ;


@end


#endif