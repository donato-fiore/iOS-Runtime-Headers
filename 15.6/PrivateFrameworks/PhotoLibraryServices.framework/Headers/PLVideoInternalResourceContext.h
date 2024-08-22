// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLVIDEOINTERNALRESOURCECONTEXT_H
#define PLVIDEOINTERNALRESOURCECONTEXT_H

@class NSManagedObjectContext, NSString;
@protocol PLVideoResourceContext, PLVideoChoosingAssetInformation;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation>

 {
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasAdjustments;
-(BOOL)isPhotoIris;
-(BOOL)shouldUseNonAdjustedVersion;
-(BOOL)validateResource:(id)arg0 ;
-(CGFloat)sizeThresholdForHighQuality;
-(id)backingResourceForVideoResource:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 asset:(id)arg1 ;
-(id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
-(id)videoResourcesMatchingVersions:(id)arg0 ;
-(void)repairResource:(id)arg0 ;


@end


#endif