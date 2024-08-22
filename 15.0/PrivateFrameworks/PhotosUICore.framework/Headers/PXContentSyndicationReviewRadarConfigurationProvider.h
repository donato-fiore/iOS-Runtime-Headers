// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCONTENTSYNDICATIONREVIEWRADARCONFIGURATIONPROVIDER_H
#define PXCONTENTSYNDICATIONREVIEWRADARCONFIGURATIONPROVIDER_H

@protocol PXRadarConfigurationProvider;

#import <Foundation/Foundation.h>

#import "PXRadarConfiguration.h"

@interface PXContentSyndicationReviewRadarConfigurationProvider : NSObject <PXRadarConfigurationProvider>



@property (readonly, nonatomic) BOOL includeAssetImages;
@property (readonly, nonatomic) PXRadarConfiguration *radarConfiguration;




@end


#endif