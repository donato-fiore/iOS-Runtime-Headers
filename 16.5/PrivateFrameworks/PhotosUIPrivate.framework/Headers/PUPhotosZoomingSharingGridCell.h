// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSZOOMINGSHARINGGRIDCELL_H
#define PUPHOTOSZOOMINGSHARINGGRIDCELL_H

@class UIView;


#import "PUPhotosSharingGridCell.h"

@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell {
    CGRect _defaultBounds;
    NSUInteger _badgesLayoutAnchor;
    UIView *_selectionView;
    CGPoint _selectionViewDefaultCenter;
    UIView *_optionView;
    CGPoint _optionViewDefaultCenter;
}




-(id)initWithFrame:(struct CGRect )arg0 selectionView:(id)arg1 optionView:(id)arg2 layoutAnchor:(NSUInteger)arg3 ;
-(void)layoutSubviews;


@end


#endif