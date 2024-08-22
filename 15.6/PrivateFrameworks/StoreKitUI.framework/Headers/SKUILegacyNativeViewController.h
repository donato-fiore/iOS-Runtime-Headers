// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILEGACYNATIVEVIEWCONTROLLER_H
#define SKUILEGACYNATIVEVIEWCONTROLLER_H

@class NSURL, NSData, SSVLoadURLOperation, NSString;
@protocol SKUICategoryControllerDelegate;


#import "SKUIViewController.h"
#import "SKUICategoryController.h"
#import "SKUIStorePageViewController.h"

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate>

 {
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_categoryController;
-(id)_storePageViewController;
-(id)activeMetricsController;
-(id)initWithData:(id)arg0 fromOperation:(id)arg1 ;
-(void)_finishLoadWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_reloadNavigationItem;
-(void)categoryController:(id)arg0 didSelectCategory:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif