// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETEXPORTREQUESTOPTIONS_H
#define PHASSETEXPORTREQUESTOPTIONS_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHAssetExportRequestOptions : NSObject

@property (copy, nonatomic) NSString *customFilenameBase; // ivar: _customFilenameBase
@property (nonatomic) BOOL disableMetadataCorrections; // ivar: _disableMetadataCorrections
@property (nonatomic) BOOL dontAllowRAW; // ivar: _dontAllowRAW
@property (nonatomic) BOOL flattenSlomoVideos; // ivar: _flattenSlomoVideos
@property (nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking; // ivar: _forceAccessibilityDescriptionMetadataBaking
@property (nonatomic) BOOL forceCaptionMetadataBaking; // ivar: _forceCaptionMetadataBaking
@property (nonatomic) BOOL forceDateTimeMetadataBaking; // ivar: _forceDateTimeMetadataBaking
@property (nonatomic) BOOL forceLocationMetadataBaking; // ivar: _forceLocationMetadataBaking
@property (nonatomic) BOOL includeAllAssetResources; // ivar: _includeAllAssetResources
@property (nonatomic) NSInteger locationComparisonStrategy; // ivar: _locationComparisonStrategy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // ivar: _resultHandlerQueue
@property (nonatomic) BOOL shouldBundleComplexAssetResources; // ivar: _shouldBundleComplexAssetResources
@property (nonatomic) BOOL shouldStripAccessibilityDescription; // ivar: _shouldStripAccessibilityDescription
@property (nonatomic) BOOL shouldStripCaption; // ivar: _shouldStripCaption
@property (nonatomic) BOOL shouldStripLocation; // ivar: _shouldStripLocation
@property (nonatomic) BOOL treatLivePhotoAsStill; // ivar: _treatLivePhotoAsStill
@property (nonatomic) NSInteger variant; // ivar: _variant
@property (copy, nonatomic) NSString *videoExportFileType; // ivar: _videoExportFileType
@property (copy, nonatomic) NSString *videoExportPreset; // ivar: _videoExportPreset


-(id)description;


@end


#endif