// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRECORDCHANGE_H
#define CPLRECORDCHANGE_H

@class NSString, NSDate, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CPLRecordChangeDiffTracker.h"
#import "CPLScopedIdentifier.h"

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>

 {
    CPLRecordChangeDiffTracker *_attachedDiffTracker;
    NSString *_uploadIdentifier;
    BOOL _shouldNotTrustCloudCache;
    BOOL _shouldFilterDefaultValuesForNewProperties;
    BOOL _isSparseFullChange;
    BOOL _shouldOnlyUploadNewResources;
    BOOL _didCacheRealResourceSizeInStorage;
    NSUInteger _cachedRealResourceSizeInStorage;
}


@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (copy, nonatomic) NSDate *dateDeleted; // ivar: _dateDeleted
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL inExpunged; // ivar: _inExpunged
@property (nonatomic) BOOL inTrash; // ivar: _inTrash
@property (copy, nonatomic) NSString *realIdentifier; // ivar: _realIdentifier
@property (copy, nonatomic) NSData *recordChangeData; // ivar: _recordChangeData
@property (copy, nonatomic) NSDate *recordModificationDate; // ivar: _recordModificationDate
@property (copy, nonatomic) CPLScopedIdentifier *resourceCopyFromScopedIdentifier; // ivar: _resourceCopyFromScopedIdentifier
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // ivar: _scopedIdentifier
@property (nonatomic) BOOL serverRecordIsCorrupted; // ivar: _serverRecordIsCorrupted


+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg0 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)shouldReallyQuarantineRecord;
+(BOOL)supportsSecureCoding;
+(Class)classForStoredClassName:(id)arg0 forCPLArchiver:(id)arg1 ;
+(Class)relatedRecordClass;
+(NSInteger)maxInlineDataSize;
+(id)_descriptionForChangeType:(NSUInteger)arg0 isSparseFullChange:(BOOL)arg1 onlyUploadNewResources:(BOOL)arg2 ;
+(id)copyPropertyBlockForDirection:(SEL)arg0 ;
+(id)cplAdditionalSecureClassesForProperty:(id)arg0 ;
+(id)descriptionForChangeType:(NSUInteger)arg0 ;
+(id)descriptionForDirection:(NSUInteger)arg0 ;
+(id)equalityBlockForDirection:(SEL)arg0 ;
+(id)newChangeWithIdentifier:(id)arg0 changeType:(NSUInteger)arg1 ;
+(id)newChangeWithScopedIdentifier:(id)arg0 changeType:(NSUInteger)arg1 ;
+(id)newChangeWithType:(NSUInteger)arg0 ;
+(id)newDeleteChangeWithIdentifier:(id)arg0 ;
+(id)newDeleteChangeWithScopedIdentifier:(id)arg0 ;
+(id)newRecord;
+(id)newRecordInScopeWithIdentifier:(id)arg0 ;
+(id)newRecordWithIdentifier:(id)arg0 ;
+(id)newRecordWithScopedIdentifier:(id)arg0 ;
-(BOOL)_canLowerQuota;
-(BOOL)_shouldNotTrustCloudCache;
-(BOOL)allResourcesAreAvailable;
-(BOOL)allowsToOnlyUploadNewResources;
-(BOOL)applyChange:(id)arg0 copyPropertiesToFinalChange:(id)arg1 forChangeType:(NSUInteger)arg2 direction:(NSUInteger)arg3 diffTracker:(id)arg4 ;
-(BOOL)changeIsOnlyAddingResourcesToRecord:(id)arg0 addedResources:(*id)arg1 ;
-(BOOL)hasChangeType:(NSUInteger)arg0 ;
-(BOOL)isAssetChange;
-(BOOL)isDelete;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFullRecord;
-(BOOL)isInScopeWithIdentifier:(id)arg0 ;
-(BOOL)isMasterChange;
-(BOOL)isResourceTypeAGeneratedDerivative:(NSUInteger)arg0 ;
-(BOOL)isScopeChange;
-(BOOL)isSparseFullChange;
-(BOOL)resourceChangeWillOnlyChangeDerivatives:(id)arg0 ;
-(BOOL)shouldApplyPropertiesWithSelector:(SEL)arg0 ;
-(BOOL)shouldFilterDefaultValuesForNewProperties;
-(BOOL)shouldOnlyUploadNewResources;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(BOOL)supportsResourceType:(NSUInteger)arg0 ;
-(BOOL)supportsResources;
-(BOOL)validateChangeWithError:(*id)arg0 ;
-(BOOL)validateFullRecord;
-(BOOL)validateRecordForTracker:(id)arg0 ;
-(Class)relatedRecordClass;
-(NSInteger)dequeueOrder;
-(NSUInteger)baseDerivativeResourceType;
-(NSUInteger)baseVideoComplemenentResourceType;
-(NSUInteger)effectiveResourceSizeToUploadUsingStorage:(id)arg0 ;
-(NSUInteger)estimatedRecordSize;
-(NSUInteger)fullChangeTypeForFullRecord;
-(NSUInteger)hash;
-(NSUInteger)originalResourceSize;
-(NSUInteger)realResourceSize;
-(NSUInteger)realUploadResourceSize;
-(NSUInteger)totalResourceSize;
-(id)_uploadIdentifier;
-(id)allRelatedScopedIdentifiers;
-(id)asRecordView;
-(id)attachedDiffTracker;
-(id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0 ;
-(id)compactedChangeWithRelatedChanges:(id)arg0 isOnlyChange:(BOOL)arg1 fullRecord:(id)arg2 usingStorageView:(id)arg3 ;
-(id)copyChangeType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cplFullDescription;
-(id)description;
-(id)initWithCPLArchiver:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mergeRecordChangeWithNewRecordChange:(id)arg0 direction:(NSUInteger)arg1 ;
-(id)onlyAddedResources;
-(id)propertiesDescription;
-(id)propertiesForChangeType:(NSUInteger)arg0 ;
-(id)proposedCloudScopedIdentifierWithError:(*id)arg0 ;
-(id)proposedLocalScopedIdentifier;
-(id)realRecordChangeFromRecordChange:(id)arg0 direction:(NSUInteger)arg1 newRecord:(*id)arg2 ;
-(id)realRecordChangeFromRecordChange:(id)arg0 direction:(NSUInteger)arg1 newRecord:(*id)arg2 changeType:(NSUInteger)arg3 diffTracker:(id)arg4 ;
-(id)realRecordChangeFromRecordChange:(id)arg0 direction:(NSUInteger)arg1 newRecord:(*id)arg2 diffTracker:(id)arg3 ;
-(id)realScopedIdentifier;
-(id)redactedDescription;
-(id)relatedIdentifier;
-(id)relatedScopedIdentifier;
-(id)resourceForType:(NSUInteger)arg0 ;
-(id)resourcePerType;
-(id)resources;
-(id)resourcesDescription;
-(id)secondaryIdentifier;
-(id)secondaryScopedIdentifier;
-(id)storedClassNameForCPLArchiver:(id)arg0 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(void)_setShouldNotTrustCloudCache:(BOOL)arg0 ;
-(void)_setUploadIdentifier:(id)arg0 ;
-(void)applyChange:(id)arg0 ;
-(void)applyChangeType:(NSUInteger)arg0 fromChange:(id)arg1 ;
-(void)attachDiffTracker:(id)arg0 ;
-(void)awakeFromStorage;
-(void)clearChangeType:(NSUInteger)arg0 ;
-(void)clearIdentifiers;
-(void)copyDerivatives:(*NSUInteger)arg0 count:(int)arg1 avoidResourceType:(NSUInteger)arg2 fromRecord:(id)arg3 inResourcePerType:(id)arg4 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateChangeTypesForChangeType:(NSUInteger)arg0 block:(id)arg1 ;
-(void)markAsSparseFullChange;
-(void)markToOnlyUploadNewResources;
-(void)prepareForStorage;
-(void)setRelatedIdentifier:(id)arg0 ;
-(void)setResources:(id)arg0 ;
-(void)setScopeIndex:(NSInteger)arg0 ;
-(void)setSecondaryIdentifier:(id)arg0 ;
-(void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg0 ;


@end


#endif