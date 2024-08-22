// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRECOGNITIONDRAWINGPREVIEWVIEWCONTROLLER_H
#define PKRECOGNITIONDRAWINGPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSString, UIImage, UIImageView, UIScrollView;
@protocol UIScrollViewDelegate;



@interface PKRecognitionDrawingPreviewViewController : UIViewController <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *drawingImage; // ivar: _drawingImage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(id)initWithDrawingImage:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)centerImageView;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif