// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTSTEPVIEWCONTROLLER_H
#define SKUIGIFTSTEPVIEWCONTROLLER_H

@class UIViewController, SSVLoadURLOperation, NSOperationQueue;


#import "SKUIGift.h"
#import "SKUIGiftConfiguration.h"

@interface SKUIGiftStepViewController : UIViewController {
    SSVLoadURLOperation *_loadOperation;
}


@property (readonly, nonatomic) SKUIGift *gift; // ivar: _gift
@property (readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // ivar: _giftConfiguration
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue


-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(void)_finishImageLoadWithImage:(id)arg0 error:(id)arg1 block:(id)arg2 ;
-(void)finishGiftingWithResult:(BOOL)arg0 ;
-(void)loadItemArtworkWithArtworkContext:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif