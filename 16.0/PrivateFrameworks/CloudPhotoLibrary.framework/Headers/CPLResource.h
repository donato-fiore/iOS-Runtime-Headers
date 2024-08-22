// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLRESOURCE_H
#define CPLRESOURCE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CPLResourceIdentity.h"
#import "CPLScopedIdentifier.h"

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger _backgroundDownloadTaskIdentifier;
}


@property (nonatomic) BOOL canGenerateDerivative; // ivar: _canGenerateDerivative
@property (retain, nonatomic) CPLResourceIdentity *identity; // ivar: _identity
@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier; // ivar: _itemScopedIdentifier
@property (nonatomic) NSUInteger resourceType; // ivar: _resourceType
@property (nonatomic) NSUInteger sourceResourceType; // ivar: _sourceResourceType


+(BOOL)cplShouldGenerateDerivatives;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg0 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)hasPriorityBoostForResourceType:(NSUInteger)arg0 ;
+(BOOL)isAdjustedResourceType:(NSUInteger)arg0 ;
+(BOOL)isDerivativeResourceType:(NSUInteger)arg0 ;
+(BOOL)isDynamicFingerprint:(id)arg0 ;
+(BOOL)isNonDerivativeResourceType:(NSUInteger)arg0 ;
+(BOOL)resourceTypeSupportsResourceExpunge:(NSUInteger)arg0 ;
+(BOOL)resourceTypeTrackedForUpload:(NSUInteger)arg0 ;
+(BOOL)shouldIgnoreResourceTypeOnUpload:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)usesFakeDerivatives;
+(NSUInteger)countOfResourceTypes;
+(NSUInteger)maxPixelSizeForResourceType:(NSUInteger)arg0 ;
+(NSUInteger)resourceTypeFromShortDescription:(id)arg0 ;
+(float)derivativeGenerationThreshold;
+(id)descriptionForResourceType:(NSUInteger)arg0 ;
+(id)normalizedResourcesFromResources:(id)arg0 resourcePerResourceType:(*id)arg1 ;
+(id)predicateMatchingDynamicFingerprintForKey:(id)arg0 ;
+(id)shortDescriptionForResourceType:(NSUInteger)arg0 ;
+(void)enumerateResourceTypesWithBlock:(id)arg0 ;
+(void)getAllResourceTypesToDownload:(**NSUInteger)arg0 ;
+(void)getAllResourceTypesToDownloadPrioritizeNonDerivatives:(**NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTrackedForUpload;
-(NSUInteger)_backgroundDownloadTaskIdentifier;
-(NSUInteger)estimatedResourceSize;
-(NSUInteger)hash;
-(id)bestFileNameForResource;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCPLArchiver:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceIdentity:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)initWithResourceIdentity:(id)arg0 itemIdentifier:(id)arg1 resourceType:(NSUInteger)arg2 ;
-(id)initWithResourceIdentity:(id)arg0 itemScopedIdentifier:(id)arg1 resourceType:(NSUInteger)arg2 ;
-(id)redactedDescription;
-(void)_setBackgroundDownloadTaskIdentifier:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif