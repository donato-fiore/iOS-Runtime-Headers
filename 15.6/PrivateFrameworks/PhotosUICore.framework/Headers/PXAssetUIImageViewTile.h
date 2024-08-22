// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETUIIMAGEVIEWTILE_H
#define PXASSETUIIMAGEVIEWTILE_H

@class UIView, NSString, UIImage, UIColor;
@protocol PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile;

#import <Foundation/Foundation.h>

#import "PXFocusableUIImageView.h"
#import "PXImageRequester.h"

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile>

 {
    PXFocusableUIImageView *_imageView;
    UIView *_contentView;
    BOOL _hasPlaceholder;
}


@property (nonatomic, setter=_setContentSize:) CGSize _contentSize; // ivar: __contentSize
@property (nonatomic, setter=_setDesiredContentsRect:) CGRect _desiredContentsRect; // ivar: __desiredContentsRect
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) BOOL shouldAllowFocus; // ivar: _shouldAllowFocus
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)init;
-(void)_updateContentView;
-(void)_updateImageRequester;
-(void)_updateImageView;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif