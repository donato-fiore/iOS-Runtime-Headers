// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMASSETSTATUSBADGEVIEW_H
#define PXCMMASSETSTATUSBADGEVIEW_H

@class UIView, NSString;
@protocol PXUIViewBasicTile, PXReusableObject;



@interface PXCMMAssetStatusBadgeView : UIView <PXUIViewBasicTile, PXReusableObject>

 {
    ? _needsUpdateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *glyphView; // ivar: _glyphView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(struct CGSize )preferredSize;
-(void)_invalidateImageView;
-(void)_updateImageViewIfNeeded;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif