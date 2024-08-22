// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLVIDEOCHOOSINGANDAVAILABILITYSUPPORT_H
#define PLVIDEOCHOOSINGANDAVAILABILITYSUPPORT_H

@class NSMutableArray, NSArray;
@protocol PLVideoChoosingAssetInformation, PLVideoResourceContext, PLVideoChoosingOptions;

#import <Foundation/Foundation.h>


@interface PLVideoChoosingAndAvailabilitySupport : NSObject {
    NSMutableArray *_resourcesNeedingRepair;
}


@property (readonly, nonatomic) NSObject<PLVideoChoosingAssetInformation> *assetInformation; // ivar: _assetInformation
@property (readonly, nonatomic) NSObject<PLVideoResourceContext> *context; // ivar: _context
@property (readonly, nonatomic) NSObject<PLVideoChoosingOptions> *options; // ivar: _options
@property (readonly, nonatomic) NSArray *resourcesNeedingRepair;
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)_checkIsReallyLocallyAvailableAndAddToRepairListIfNeeded:(id)arg0 ;
-(NSInteger)_optimalLoadingModeForResource:(id)arg0 ;
-(id)_acceptableResourceVersions;
-(id)_ensureOriginalsAreHighestQuality:(id)arg0 ;
-(id)chooseResourceWithLoadingMode:(*NSInteger)arg0 needsAdjustmentData:(*BOOL)arg1 error:(*id)arg2 ;
-(id)initWithContext:(id)arg0 assetInformation:(id)arg1 options:(id)arg2 size:(struct CGSize )arg3 ;
-(unsigned int)_videoQualityLevelForRequestFallbackToMediumPolicy:(*NSInteger)arg0 ;


@end


#endif