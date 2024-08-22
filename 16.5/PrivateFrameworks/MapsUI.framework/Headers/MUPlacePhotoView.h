// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEPHOTOVIEW_H
#define MUPLACEPHOTOVIEW_H

@class UIScrollView, NSString, UIImage, UIImageView;
@protocol UIScrollViewDelegate;


#import "MUPlacePhotoViewObfuscationModel.h"
#import "MUPlacePhotoObfuscationView.h"

@interface MUPlacePhotoView : UIScrollView <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isZoomed; // ivar: _isZoomed
@property (nonatomic) BOOL needsFullImageDownload; // ivar: _needsFullImageDownload
@property (retain, nonatomic) MUPlacePhotoViewObfuscationModel *obfuscationModel; // ivar: _obfuscationModel
@property (retain, nonatomic) MUPlacePhotoObfuscationView *obfuscationView; // ivar: _obfuscationView
@property (readonly) Class superclass;


-(id)initWithImage:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_updateObfuscationPosition;
-(void)_updateObfuscationText;
-(void)_updateObfuscationWithPreviousModel:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)zoomWithGestureRecognizer:(id)arg0 ;


@end


#endif