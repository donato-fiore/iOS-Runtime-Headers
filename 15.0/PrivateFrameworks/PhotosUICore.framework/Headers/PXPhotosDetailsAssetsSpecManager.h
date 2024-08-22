// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSASSETSSPECMANAGER_H
#define PXPHOTOSDETAILSASSETSSPECMANAGER_H



#import "PXFeatureSpecManager.h"
#import "PXPhotosDetailsAssetsSpec.h"

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) NSUInteger detailsOptions; // ivar: _detailsOptions
@property (readonly, nonatomic) PXPhotosDetailsAssetsSpec *spec;


-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 detailsOptions:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 detailsOptions:(NSUInteger)arg2 ;


@end


#endif