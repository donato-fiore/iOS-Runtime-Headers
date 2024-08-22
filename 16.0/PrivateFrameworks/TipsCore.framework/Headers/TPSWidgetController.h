// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSWIDGETCONTROLLER_H
#define TPSWIDGETCONTROLLER_H

@class NSMutableDictionary, NSOperationQueue;
@protocol TPSWidgetControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSDocument.h"

@interface TPSWidgetController : NSObject {
    TPSDocument *_preferredDocument;
}


@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap; // ivar: _assetURLSessionMap
@property (weak, nonatomic) NSObject<TPSWidgetControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) TPSDocument *preferredDocument;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(id)cacheFileURLForAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 assetFileInfoManager:(id)arg3 ;
-(id)init;
-(void)attemptWidgetUpdateWith:(id)arg0 ;
-(void)dealloc;
-(void)fetchAssetForAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 assetFileInfoManager:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchWidgetAssetsForDocument:(id)arg0 preferCacheIfAvailable:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateWidgetDocumentWithDocumentsMap:(id)arg0 documentsDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 preferHardwareWelcome:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)widgetAssetsForDocument:(id)arg0 preferCacheIfAvailable:(BOOL)arg1 userInterfaceStyle:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif