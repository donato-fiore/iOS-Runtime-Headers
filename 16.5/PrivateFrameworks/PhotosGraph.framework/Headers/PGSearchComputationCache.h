// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSEARCHCOMPUTATIONCACHE_H
#define PGSEARCHCOMPUTATIONCACHE_H

@class NSMutableDictionary, NSURL, PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PGSearchComputationCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *curationInformationByNodeUUID; // ivar: _curationInformationByNodeUUID
@property (readonly, nonatomic) NSMutableDictionary *locationInformationByNodeUUID; // ivar: _locationInformationByNodeUUID
@property (readonly, nonatomic) NSMutableDictionary *momentAssetPairsByNodeUUID; // ivar: _momentAssetPairsByNodeUUID
@property (readonly, nonatomic) NSURL *persistentStoreURL; // ivar: _persistentStoreURL
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(id)persistentStoreURLWithManager:(id)arg0 ;
-(BOOL)momentAssetPairs:(id)arg0 areValidWithAssociatedMomentUUIDs:(id)arg1 ;
-(id)curationInformationForNode:(id)arg0 ;
-(id)initWithPersistentStoreURL:(id)arg0 photoLibrary:(id)arg1 ;
-(id)keyAssetLocalIdentifierForNodeIdentifier:(id)arg0 withAssociatedMomentUUIDs:(id)arg1 ;
-(id)locationInformationForLocationNode:(id)arg0 locationMask:(NSUInteger)arg1 ;
-(void)invalidateCache;
-(void)save;
-(void)setCurationInformation:(id)arg0 forNode:(id)arg1 ;
-(void)setKeyAssetLocalIdentifier:(id)arg0 forNodeIdentifier:(id)arg1 withAssociatedMomentUUID:(id)arg2 ;
-(void)setLocationInformation:(id)arg0 forLocationNode:(id)arg1 locationMask:(NSUInteger)arg2 ;


@end


#endif