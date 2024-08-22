// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETLIBRARYSCOPEPROPERTIES_H
#define PHASSETLIBRARYSCOPEPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetLibraryScopeProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL assetIsInOnboardingPreviewState;
@property (readonly, nonatomic) BOOL assetIsInPhotosSuggestedPreviewState;
@property (readonly, nonatomic) BOOL assetIsPublishedToLibraryScope;
@property (readonly, nonatomic) BOOL assetManuallyAddedByUser;
@property (readonly, nonatomic) BOOL assetManuallyRejectedByUser;
@property (readonly, nonatomic) BOOL assetRejectedByCamera;
@property (readonly, nonatomic) BOOL assetRejectedByPhotosSuggester;
@property NSInteger pl_shareState; // ivar: _pl_shareState
@property (readonly, nonatomic) short suggestedByClientType;


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif