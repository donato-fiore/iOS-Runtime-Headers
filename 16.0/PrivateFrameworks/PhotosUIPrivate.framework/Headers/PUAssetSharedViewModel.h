// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETSHAREDVIEWMODEL_H
#define PUASSETSHAREDVIEWMODEL_H

@class NSProgress;
@protocol PUDisplayAsset;


#import "PUViewModel.h"
#import "PUAssetSharedViewModelChange.h"
#import "PUOperationStatus.h"

@interface PUAssetSharedViewModel : PUViewModel

@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) PUAssetSharedViewModelChange *currentChange;
@property (nonatomic) unsigned short deferredProcessingNeeded; // ivar: _deferredProcessingNeeded
@property (nonatomic) NSInteger flippingFullSizeRenderState; // ivar: _flippingFullSizeRenderState
@property (retain, nonatomic) PUOperationStatus *loadingStatus; // ivar: _loadingStatus
@property (nonatomic) BOOL needsDeferredProcessing; // ivar: _needsDeferredProcessing
@property (retain, nonatomic) NSProgress *saveProgress; // ivar: _saveProgress
@property (nonatomic) NSInteger saveState; // ivar: _saveState


-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)newViewModelChange;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif