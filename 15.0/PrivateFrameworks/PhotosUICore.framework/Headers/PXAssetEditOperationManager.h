// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETEDITOPERATIONMANAGER_H
#define PXASSETEDITOPERATIONMANAGER_H

@class NSMapTable, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXAssetEditOperationManager : NSObject

@property (readonly, nonatomic) NSMapTable *observersWithContexts; // ivar: _observersWithContexts
@property (readonly, nonatomic) NSMutableDictionary *operationStatusByAsset; // ivar: _operationStatusByAsset
@property (readonly, nonatomic) NSMutableDictionary *pendingPerformersByAsset; // ivar: _pendingPerformersByAsset
@property (readonly, nonatomic) NSMutableArray *predicateRecords; // ivar: _predicateRecords


+(id)sharedManager;
-(BOOL)canPerformEditOperationWithType:(id)arg0 onAsset:(id)arg1 ;
-(Class)_performerClassForEditOperationWithType:(id)arg0 onAsset:(id)arg1 ;
-(NSInteger)editOperationStatusForAsset:(id)arg0 ;
-(id)_performerForEditOperationWithType:(id)arg0 onAsset:(id)arg1 ;
-(id)init;
-(id)performEditOperationWithType:(id)arg0 asset:(id)arg1 completionHandler:(id)arg2 ;
-(id)performEditOperationWithType:(id)arg0 asset:(id)arg1 delay:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)_addPendingPerformer:(id)arg0 ;
-(void)_enumerateObserversUsingBlock:(id)arg0 ;
-(void)_handleCompletionOfPerformer:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 externalCompletionHandler:(id)arg3 ;
-(void)_removePendingPerformer:(id)arg0 ;
-(void)_signalPendingPerformersChangeForAsset:(id)arg0 ;
-(void)_signalStatusChangeForAsset:(id)arg0 ;
-(void)_updateOperationStatusForAsset:(id)arg0 ;
-(void)enumerateEditOperationsPerformedOnAsset:(id)arg0 usingBlock:(id)arg1 ;
-(void)registerObserver:(id)arg0 context:(*void)arg1 ;
-(void)registerPerformerClass:(Class)arg0 withPredicate:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 context:(*void)arg1 ;


@end


#endif