// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSWIDGETCONTROLLER_H
#define TPSWIDGETCONTROLLER_H

@class NSMutableDictionary, NSOperationQueue;
@protocol TPSWidgetControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSTip.h"

@interface TPSWidgetController : NSObject {
    TPSTip *_preferredTip;
}


@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap; // ivar: _assetURLSessionMap
@property (weak, nonatomic) NSObject<TPSWidgetControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) TPSTip *preferredTip;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(id)assetsConfigurationForAssets:(id)arg0 language:(id)arg1 userInterface:(NSInteger)arg2 ;
-(id)cacheFileURLForAssets:(id)arg0 language:(id)arg1 mode:(NSInteger)arg2 ;
-(id)init;
-(void)dealloc;
-(void)fetchAssetForAssets:(id)arg0 language:(id)arg1 mode:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchWidgetAssetsForTip:(id)arg0 preferCacheIfAvailable:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateWidgetTipWithTipsMap:(id)arg0 tipsDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 preferHardwareWelcome:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)widgetAssetsForTip:(id)arg0 preferCacheIfAvailable:(BOOL)arg1 userInterface:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif