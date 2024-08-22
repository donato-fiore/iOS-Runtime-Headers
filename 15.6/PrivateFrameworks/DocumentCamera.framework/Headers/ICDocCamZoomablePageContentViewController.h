// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMZOOMABLEPAGECONTENTVIEWCONTROLLER_H
#define ICDOCCAMZOOMABLEPAGECONTENTVIEWCONTROLLER_H

@class UIViewController, VKImageAnalysisInteraction, NSString, UIImage, UIImageView, UIScrollView;
@protocol UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate, ICDocCamZoomablePageContentDelegate;



@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate>



@property (retain, nonatomic) VKImageAnalysisInteraction *analysisInteraction; // ivar: _analysisInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (weak, nonatomic) NSObject<ICDocCamZoomablePageContentDelegate> *pageContentDelegate; // ivar: _pageContentDelegate
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (nonatomic) CGSize prevScrollViewSize; // ivar: _prevScrollViewSize
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews; // ivar: _shouldSetupScalesInViewDidLayoutSubviews
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat zoomScale;


-(BOOL)_canShowWhileLocked;
-(BOOL)accessibilityPerformEscape;
-(BOOL)isTouchingAnalyzableContentAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGRect )zoomRectForScale:(float)arg0 withCenter:(struct CGPoint )arg1 ;
-(void)analyzeCurrentImageIfNecessary;
-(void)doubleTap:(id)arg0 ;
-(void)pageContentViewDidPencilDown;
-(void)resetZoom;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setupAccessibility;
-(void)setupScales;
-(void)singleTap;
-(void)view:(id)arg0 setCenter:(struct CGPoint )arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif