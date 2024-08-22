// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPHOTOSHIGHLIGHTCHANGEREQUEST_H
#define PHPHOTOSHIGHLIGHTCHANGEREQUEST_H

@class NSString, NSDictionary, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHPhotosHighlight.h"

@interface PHPhotosHighlightChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSDictionary *curationHelpersByCurationType; // ivar: _curationHelpersByCurationType
@property (retain, nonatomic) NSString *dateDescription;
@property (retain, nonatomic) NSString *dateDescriptionMixed;
@property (retain, nonatomic) NSString *dateDescriptionShared;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *dayGroupKeyAssetHelper; // ivar: _dayGroupKeyAssetHelper
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *dayGroupKeyAssetSharedHelper; // ivar: _dayGroupKeyAssetSharedHelper
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *dayKeyAssetHelper; // ivar: _dayKeyAssetHelper
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *dayKeyAssetSharedHelper; // ivar: _dayKeyAssetSharedHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short enrichmentState;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *monthKeyAssetHelper; // ivar: _monthKeyAssetHelper
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *monthKeyAssetSharedHelper; // ivar: _monthKeyAssetSharedHelper
@property (nonatomic) NSUInteger mood;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) PHPhotosHighlight *originalHighlight; // ivar: _originalHighlight
@property (nonatomic) CGFloat promotionScore;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (retain, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) NSString *smartDescriptionMixed;
@property (retain, nonatomic) NSString *smartDescriptionShared;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) NSString *verboseSmartDescriptionMixed;
@property (retain, nonatomic) NSString *verboseSmartDescriptionShared;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) unsigned short visibilityStateMixed;
@property (nonatomic) unsigned short visibilityStateShared;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *yearKeyAssetHelper; // ivar: _yearKeyAssetHelper
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *yearKeyAssetSharedHelper; // ivar: _yearKeyAssetSharedHelper


+(id)changeRequestForPhotosHighlight:(id)arg0 ;
+(void)deletePhotosHighlights:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(short)enrichmentVersion;
-(unsigned short)_externalCurationTypeForInternalCurationType:(unsigned short)arg0 ;
-(unsigned short)_internalCurationTypeForExternalCurationType:(unsigned short)arg0 ;
-(void)_initializeCurationHelpersWithHelper:(id)arg0 xpcDict:(id)arg1 ;
-(void)clearCurationWithType:(unsigned short)arg0 ;
-(void)didEnrichHighlight;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)setAssets:(id)arg0 forCurationType:(unsigned short)arg1 ;
-(void)setEnrichmentVersion:(short)arg0 ;
-(void)setKeyAssetPrivate:(id)arg0 ;
-(void)setKeyAssetShared:(id)arg0 ;


@end


#endif