// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEPHOTOVIEW_H
#define MKPLACEPHOTOVIEW_H

@class UIScrollView, NSString, UIImage, UIImageView;
@protocol UIScrollViewDelegate;



@interface MKPlacePhotoView : UIScrollView <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isZoomed; // ivar: _isZoomed
@property (nonatomic) BOOL needsFullImageDownload; // ivar: _needsFullImageDownload
@property (readonly) Class superclass;


-(id)initWithImage:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)zoomWithGestureRecognizer:(id)arg0 ;


@end


#endif