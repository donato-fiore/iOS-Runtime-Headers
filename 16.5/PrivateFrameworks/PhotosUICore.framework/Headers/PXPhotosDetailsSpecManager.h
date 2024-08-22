// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSSPECMANAGER_H
#define PXPHOTOSDETAILSSPECMANAGER_H



#import "PXFeatureSpecManager.h"
#import "PXPhotosDetailsSpec.h"

@interface PXPhotosDetailsSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) NSUInteger detailsOptions; // ivar: _detailsOptions
@property (readonly, nonatomic) PXPhotosDetailsSpec *spec;


-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 detailsOptions:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 detailsOptions:(NSUInteger)arg2 ;


@end


#endif