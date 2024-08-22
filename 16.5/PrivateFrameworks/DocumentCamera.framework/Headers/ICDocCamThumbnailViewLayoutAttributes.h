// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMTHUMBNAILVIEWLAYOUTATTRIBUTES_H
#define ICDOCCAMTHUMBNAILVIEWLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes;



@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) CGFloat imageHeight; // ivar: _imageHeight
@property (nonatomic) CGFloat imageWidth; // ivar: _imageWidth
@property (nonatomic) BOOL renderBorder; // ivar: _renderBorder
@property (nonatomic) BOOL renderShadow; // ivar: _renderShadow


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif