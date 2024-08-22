// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITIMPORTSTATUSMANAGER_H
#define PXPHOTOKITIMPORTSTATUSMANAGER_H

@class NSHashTable, NSMutableDictionary, NSString;
@protocol PXAssetImportStatusManager;

#import <Foundation/Foundation.h>


@interface PXPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager>

 {
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsStateSimulation; // ivar: _supportsStateSimulation


-(NSInteger)_simulatedStateForAsset:(id)arg0 ;
-(NSInteger)importStateForAsset:(id)arg0 ;
-(id)init;
-(id)initAllowingSimulation:(BOOL)arg0 ;
-(void)_notifySimulationObserversForAssetReference:(id)arg0 ;
-(void)addAssetImportStatusObserver:(id)arg0 ;
-(void)beginSimulatedImportForAssetReference:(id)arg0 ;
-(void)completeSimulatedImportForAssetReference:(id)arg0 withSuccess:(BOOL)arg1 ;
-(void)removeAssetImportStatusObserver:(id)arg0 ;


@end


#endif