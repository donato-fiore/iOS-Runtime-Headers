// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTACTIVITY_H
#define SKUIGIFTACTIVITY_H

@class UIActivity, NSString;
@protocol SKUIGiftViewControllerDelegate;


#import "SKUIClientContext.h"
#import "SKUIProductPageItem.h"

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate>

 {
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_beforeActivity;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithItem:(id)arg0 clientContext:(id)arg1 ;
-(void)giftViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;


@end


#endif