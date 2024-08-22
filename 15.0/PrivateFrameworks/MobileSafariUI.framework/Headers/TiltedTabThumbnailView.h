// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILTEDTABTHUMBNAILVIEW_H
#define TILTEDTABTHUMBNAILVIEW_H

@class SFGradientView;


#import "TabThumbnailView.h"
#import "TiltedTabItemLayoutInfo.h"
#import "TabSnapshotImageView.h"
#import "TiltedTabView.h"

@interface TiltedTabThumbnailView : TabThumbnailView {
    SFGradientView *_contentShadowView;
    TiltedTabItemLayoutInfo *_layoutInfo;
}


@property (readonly, nonatomic) TabSnapshotImageView *snapshotView; // ivar: _snapshotView
@property (weak, nonatomic) TiltedTabView *tiltedTabView; // ivar: _tiltedTabView


-(BOOL)headerHasFinishedAnimating;
-(BOOL)titleIsHorizontallyCentered;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )headerBackgroundViewFrame;
-(void)layoutSubviews;
-(void)setTitleFont:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif