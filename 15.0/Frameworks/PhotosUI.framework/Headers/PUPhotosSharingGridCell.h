// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSSHARINGGRIDCELL_H
#define PUPHOTOSSHARINGGRIDCELL_H

@class UICollectionViewCell, UIView;


#import "PUPhotosZoomingSharingGridCell.h"
#import "PUPhotoView.h"

@interface PUPhotosSharingGridCell : UICollectionViewCell {
    UIView *_highlightOverlayView;
    CGPoint _originalZoomPoint;
    CGPoint _lastZoomPoint;
    PUPhotosZoomingSharingGridCell *_zoomingCell;
    UIView *_zoomingCellSuperview;
}


@property (nonatomic) NSInteger currentImageRequestID; // ivar: _currentImageRequestID
@property (readonly, nonatomic) PUPhotoView *photoView; // ivar: _photoView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateHighlight;
-(void)_updateSubviewOrdering;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif