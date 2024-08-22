// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIINCOMPATIBLEAPPVIEWCONTROLLER_H
#define SKUIINCOMPATIBLEAPPVIEWCONTROLLER_H

@class UIImage, SSVLoadURLOperation, NSString, NSOperationQueue, UIScrollView;
@protocol SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;


#import "SKUIViewController.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIIncompatibleAppView.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUIProductPageItem.h"

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController>

 {
    SKUIItemArtworkContext *_artworkContext;
    UIImage *_iconImage;
    SSVLoadURLOperation *_loadIconOperation;
    SKUIIncompatibleAppView *_incompatibleView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // ivar: _headerViewController
@property (readonly, nonatomic) SKUIProductPageItem *incompatibleItem; // ivar: _incompatibleItem
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;


-(id)_artworkContext;
-(id)initWithIncompatibleItem:(id)arg0 ;
-(void)_learnMoreAboutApp:(id)arg0 ;
-(void)_learnMoreAboutIPad:(id)arg0 ;
-(void)_setArtworkWithImage:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif