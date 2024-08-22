// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDUPLICATESRADARCONFIGURATIONPROVIDER_H
#define PXDUPLICATESRADARCONFIGURATIONPROVIDER_H

@protocol PXRadarConfigurationProvider;

#import <Foundation/Foundation.h>

#import "PXRadarConfiguration.h"

@interface PXDuplicatesRadarConfigurationProvider : NSObject <PXRadarConfigurationProvider>



@property (readonly, nonatomic) BOOL includeAssetImages;
@property (readonly, nonatomic) BOOL includeAssetThumbnails;
@property (readonly, nonatomic) PXRadarConfiguration *radarConfiguration;




@end


#endif