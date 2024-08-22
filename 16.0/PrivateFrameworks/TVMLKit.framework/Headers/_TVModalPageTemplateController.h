// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVMODALPAGETEMPLATECONTROLLER_H
#define _TVMODALPAGETEMPLATECONTROLLER_H

@class UIViewController, IKViewElement, NSArray, UIPageViewController, NSString;
@protocol UIPageViewControllerDataSource;



@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource>

 {
    IKViewElement *_backgroundElement;
    NSArray *_bezelViewControllers;
    IKViewElement *_collectionListElement;
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    IKViewElement *_viewElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateWithCollectionListElement:(id)arg0 ;
-(id)_viewControllerWithElement:(id)arg0 existingController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_tapAction:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif