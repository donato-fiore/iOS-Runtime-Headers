// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRODUCTSTOREPROMOTIONCONTROLLER_H
#define SKPRODUCTSTOREPROMOTIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SKProductStorePromotionController : NSObject



+(id)defaultController;
-(void)_clearPromotionInfo;
-(void)_fetchProductsForPromotionOrder:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchStorePromotionOrderWithCompletionHandler:(id)arg0 ;
-(void)fetchStorePromotionVisibilityForProduct:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateStorePromotionOrder:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateStorePromotionVisibility:(NSInteger)arg0 forProduct:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif