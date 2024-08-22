// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDPLAYERSHADOWVIEW_H
#define GKDASHBOARDPLAYERSHADOWVIEW_H

@class UIView, UICollectionViewCell, GKPlayer;


#import "GKDashboardPlayerPhotoView.h"

@interface GKDashboardPlayerShadowView : UIView

@property (nonatomic) BOOL dimmed;
@property (readonly, nonatomic) BOOL isUsingPlaceholder;
@property (nonatomic) UICollectionViewCell *parentCell; // ivar: _parentCell
@property (readonly, nonatomic) UIView *parentView;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *photoView; // ivar: _photoView
@property (retain, nonatomic) GKPlayer *player;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)invalidatePhoto;
-(void)layoutSubviews;
-(void)setupPhoto;


@end


#endif