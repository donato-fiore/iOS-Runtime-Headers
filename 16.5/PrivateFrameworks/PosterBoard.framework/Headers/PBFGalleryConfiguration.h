// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFGALLERYCONFIGURATION_H
#define PBFGALLERYCONFIGURATION_H

@class NSOrderedSet, NSDictionary, NSMutableDictionary, NSSet, NSArray, ATXFaceGalleryConfiguration;
@protocol PBFComplicationSnapshotProviding, PBFPosterSnapshotProviding;

#import <Foundation/Foundation.h>


@interface PBFGalleryConfiguration : NSObject {
    NSOrderedSet *_sectionIdentifiers;
    NSDictionary *_sectionIdentifierToSectionMap;
    NSDictionary *_sectionIdentifierToItems;
    NSMutableDictionary *_posterDescriptorLookupInfoForItemIdentifier;
    NSMutableDictionary *_previewIdentifierToPreview;
    NSOrderedSet *_previews;
}


@property (retain, nonatomic) NSObject<PBFComplicationSnapshotProviding> *complicationSnapshotProvider; // ivar: _complicationSnapshotProvider
@property (readonly, nonatomic) NSDictionary *dynamicDescriptorsByExtensionIdentifier; // ivar: _dynamicDescriptorsByExtensionIdentifier
@property (readonly, nonatomic) NSDictionary *extensionsByIdentifier; // ivar: _extensionsByIdentifier
@property (readonly, nonatomic) NSSet *posterPreviews;
@property (readonly, nonatomic) NSArray *posterSnapshotRequests;
@property (readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;
@property (retain, nonatomic) NSObject<PBFPosterSnapshotProviding> *snapshotProvider; // ivar: _snapshotProvider
@property (readonly, nonatomic) NSSet *snapshotURLs;
@property (readonly, nonatomic) NSDictionary *staticDescriptorsByExtensionIdentifier; // ivar: _staticDescriptorsByExtensionIdentifier
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *suggestedLayout; // ivar: _suggestedLayout


-(id)_posterDescriptorLookupInfoForItem:(id)arg0 ;
-(id)_posterDescriptorLookupInfoForPreviewItem:(id)arg0 ;
-(id)complicationSnapshotRequests;
-(id)init;
-(id)initWithSuggestedLayout:(id)arg0 dynamicDescriptorsByExtensionIdentifier:(id)arg1 staticDescriptorsByExtensionIdentifier:(id)arg2 extensionsByIdentifier:(id)arg3 ;
-(id)itemsForSectionWithIdentifier:(id)arg0 ;
-(id)posterPreviewForUniqueIdentifier:(id)arg0 ;
-(id)posterSnapshotRequestsForExtensionBundleIdentifier:(id)arg0 ;
-(id)previewForItem:(id)arg0 section:(id)arg1 ;
-(id)sectionForSectionIdentifier:(id)arg0 ;
-(id)snapshotForPosterPreview:(id)arg0 ;
-(void)_hydrateSectionIdentifiersIfNeeded;
-(void)enumeratePreviews:(id)arg0 ;
-(void)fetchComplicationsForPreview:(id)arg0 completion:(id)arg1 ;
-(void)prewarmGallerySnapshotsWithCompletion:(id)arg0 ;


@end


#endif