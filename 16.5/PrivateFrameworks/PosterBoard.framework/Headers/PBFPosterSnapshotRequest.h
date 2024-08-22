// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERSNAPSHOTREQUEST_H
#define PBFPOSTERSNAPSHOTREQUEST_H

@class PRPosterConfiguredProperties, NSArray, NSString, PRSServerPosterPath;

#import <Foundation/Foundation.h>


@interface PBFPosterSnapshotRequest : NSObject {
    NSUInteger _cachedHash;
}


@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties; // ivar: _configuredProperties
@property (readonly, nonatomic) NSArray *definitions; // ivar: _definitions
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger intention; // ivar: _intention
@property (readonly, nonatomic) BOOL loadFromCacheIfAvailable; // ivar: _loadFromCacheIfAvailable
@property (readonly, nonatomic) PRSServerPosterPath *path; // ivar: _path
@property (nonatomic) NSInteger powerLogReason; // ivar: _powerLogReason
@property (readonly, nonatomic) NSString *previewIdentifier; // ivar: _previewIdentifier
@property (readonly, nonatomic) NSString *provider;


+(id)snapshotRequestForConfiguration:(id)arg0 ;
+(id)snapshotRequestForConfiguration:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)snapshotRequestForConfiguration:(id)arg0 compatibleWithTraitCollection:(id)arg1 definitions:(id)arg2 ;
+(id)snapshotRequestForConfiguration:(id)arg0 compatibleWithTraitCollection:(id)arg1 definitions:(id)arg2 loadFromCacheIfAvailable:(BOOL)arg3 ;
+(id)snapshotRequestForConfiguration:(id)arg0 compatibleWithTraitCollection:(id)arg1 loadFromCacheIfAvailable:(BOOL)arg2 ;
+(id)snapshotRequestForConfiguration:(id)arg0 withinSwitcherConfiguration:(id)arg1 variant:(NSInteger)arg2 compatibleWithTraitCollection:(id)arg3 snapshotDefinitions:(id)arg4 ;
+(id)snapshotRequestForPath:(id)arg0 configuredProperties:(id)arg1 ;
+(id)snapshotRequestForPreview:(id)arg0 ;
+(id)snapshotRequestForPreview:(id)arg0 loadFromCacheIfAvailable:(BOOL)arg1 ;
-(BOOL)_isEqualToRequest:(id)arg0 allowingOtherDefinitionsAreSubset:(BOOL)arg1 ;
-(BOOL)containsRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 definitions:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 descriptor:(id)arg1 configuredProperties:(id)arg2 definitions:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 path:(id)arg1 configuredProperties:(id)arg2 definitions:(id)arg3 loadFromCacheIfAvailable:(BOOL)arg4 previewIdentifier:(id)arg5 ;


@end


#endif