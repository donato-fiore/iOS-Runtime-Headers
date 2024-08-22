// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETLOCALAVAILABILITYHELPER_H
#define PXPHOTOKITASSETLOCALAVAILABILITYHELPER_H

@class PHResourceLocalAvailabilityRequest, NSProgress, NSMutableArray;
@protocol PXFastEnumeration, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPhotoKitAssetLocalAvailabilityHelper : NSObject

@property (readonly, nonatomic) NSObject<PXFastEnumeration> *assets; // ivar: _assets
@property (readonly, nonatomic) PHResourceLocalAvailabilityRequest *currentResourceRequest; // ivar: _currentResourceRequest
@property (retain, nonatomic) NSProgress *localAvailabilityProgress; // ivar: _localAvailabilityProgress
@property (readonly, nonatomic) NSProgress *overallProgress; // ivar: _overallProgress
@property (readonly, nonatomic) NSMutableArray *pinnedResourceLocalAvailabilityRequests; // ivar: _pinnedResourceLocalAvailabilityRequests
@property (readonly, nonatomic) NSMutableArray *resourceLocalAvailabilityRequests; // ivar: _resourceLocalAvailabilityRequests
@property (readonly, nonatomic) BOOL treatLivePhotoAsStill; // ivar: _treatLivePhotoAsStill
@property (readonly, nonatomic) BOOL wasInterrupted; // ivar: _wasInterrupted
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(NSUInteger)_ensureAssetsAreLocallyAvailable:(*id)arg0 ;
-(id)_setUpLocalAvailabilityRequests;
-(id)ensureLocalAvailabilityOfAssetsWithCompletionHandler:(id)arg0 ;
-(id)initWithAssets:(id)arg0 treatLivePhotoAsStill:(BOOL)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif