// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASGALLERYTEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASGALLERYTEMPLATEVIEWCONTROLLER_H



#import "VideosExtrasTemplateViewController.h"
#import "VideosExtrasBannerController.h"
#import "VideosExtrasGridElementViewController.h"

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {
    VideosExtrasBannerController *_bannerController;
    VideosExtrasGridElementViewController *_gridViewController;
}


@property (nonatomic) NSUInteger selectedItemIndex; // ivar: _selectedItemIndex


-(BOOL)showsPlaceholder;
-(id)contentScrollView;
-(id)templateElement;
-(void)_prepareLayout;
-(void)viewDidLoad;


@end


#endif