// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSHEADERPREVIEWTILE_H
#define PXPHOTOSDETAILSHEADERPREVIEWTILE_H

@class UIView, NSString;
@protocol PXUIViewBasicTile;


#import "PXUIImageTile.h"
#import "PXUIFloatingContentView.h"

@interface PXPhotosDetailsHeaderPreviewTile : PXUIImageTile <PXUIViewBasicTile>

 {
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
}


@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView; // ivar: __contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(void)_updateContentViewFrame;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif