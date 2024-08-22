// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIEWELEMENTSLIDESHOWCONTROLLER_H
#define SKUIVIEWELEMENTSLIDESHOWCONTROLLER_H

@class NSMutableArray, NSString;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, SKUIViewElementSlideshowDelegate;

#import <Foundation/Foundation.h>

#import "SKUISlideshowViewController.h"
#import "SKUIIPhoneSlideshowViewController.h"
#import "SKUIViewElementLayoutContext.h"

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate>

 {
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    NSInteger _selectedIndex;
    NSString *_title;
}


@property (retain, nonatomic) NSMutableArray *dataConsumers; // ivar: _dataConsumers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIViewElementSlideshowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIViewElementLayoutContext *layoutContext; // ivar: _layoutContext
@property (readonly, nonatomic) NSInteger numberOfSlideshowItems;
@property (readonly) Class superclass;


-(NSInteger)numberOfItemsInSlideshowViewController:(id)arg0 ;
-(id)initWithShelf:(id)arg0 selectedLockup:(id)arg1 ;
-(id)slideshowViewController:(id)arg0 dataConsumerAtIndex:(NSInteger)arg1 ;
-(id)slideshowViewController:(id)arg0 imageURLAtIndex:(NSInteger)arg1 ;
-(id)slideshowViewController:(id)arg0 placeholderImageAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)presentFromParentViewController:(id)arg0 ;
-(void)slideshowViewControllerDidFinish:(id)arg0 ;


@end


#endif