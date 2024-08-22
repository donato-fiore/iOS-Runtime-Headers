// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERSELECTIONCONFIGURATIONMETADATA_H
#define PBFPOSTERSELECTIONCONFIGURATIONMETADATA_H

@class UIImage;
@protocol PBFPosterPreview;

#import <Foundation/Foundation.h>


@interface PBFPosterSelectionConfigurationMetadata : NSObject

@property (retain, nonatomic) UIImage *cachedSnapshot; // ivar: _cachedSnapshot
@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview




@end


#endif