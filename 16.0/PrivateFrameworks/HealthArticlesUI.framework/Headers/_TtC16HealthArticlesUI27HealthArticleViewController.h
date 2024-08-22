// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16HEALTHARTICLESUI27HEALTHARTICLEVIEWCONTROLLER_H
#define _TTC16HEALTHARTICLESUI27HEALTHARTICLEVIEWCONTROLLER_H

@class UIViewController;
@protocol UIScrollViewDelegate;



@interface _TtC16HealthArticlesUI27HealthArticleViewController : UIViewController <UIScrollViewDelegate>

 {
    ? components;
    ? $__lazy_storage_$_componentViews;
    ? $__lazy_storage_$_contentView;
    ? $__lazy_storage_$_trackingViewToState;
    ? scrollView;
}


@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dismissArticleModal;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif