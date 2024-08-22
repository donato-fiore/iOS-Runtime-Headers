// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYDETAILVIEWCONTROLLER_H
#define PRCOMPLICATIONGALLERYDETAILVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UIImage;
@protocol PRComplicationGalleryDetailViewDelegate, PRComplicationGalleryDetailPageViewControllerDelegate, PRComplicationGalleryDetailViewControllerDelegate, PRComplicationGalleryWidgetHostProviding;



@interface PRComplicationGalleryDetailViewController : UIViewController <PRComplicationGalleryDetailViewDelegate, PRComplicationGalleryDetailPageViewControllerDelegate>



@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRComplicationGalleryDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (copy, nonatomic) NSArray *pageViewControllers; // ivar: _pageViewControllers
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PRComplicationGalleryWidgetHostProviding> *widgetHostProviding; // ivar: _widgetHostProviding


-(id)_complicationGalleryDetailView;
-(id)initWithWidgetHostProviding:(id)arg0 ;
-(void)_updateContent;
-(void)_updateParallax;
-(void)complicationGalleryDetailPageViewController:(id)arg0 didAddComplication:(id)arg1 ;
-(void)complicationGalleryView:(id)arg0 didUpdateVisiblePagesWithAppearedBlock:(id)arg1 ;
-(void)complicationGalleryViewDidTapClose:(id)arg0 ;
-(void)complicationGalleryViewShouldUpdateParallax:(id)arg0 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif