// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEPACKAGETRANSPORT_H
#define AEPACKAGETRANSPORT_H

@class PXObservable, NSMutableOrderedSet, NSMutableDictionary, NSSet;
@protocol AEPackageTransportDelegate;



@interface AEPackageTransport : PXObservable

@property (readonly, nonatomic) NSMutableOrderedSet *_allOrderedPackageIdentifiers; // ivar: __allOrderedPackageIdentifiers
@property (readonly, nonatomic) NSMutableDictionary *_stagedPackagesByIdentifier; // ivar: __stagedPackagesByIdentifier
@property (weak, nonatomic) NSObject<AEPackageTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger expectedPackageCount;
@property (readonly, nonatomic) NSSet *expectedPackageIdentifiers;


-(NSUInteger)proposedStagedIndexForPendingIdentifier:(id)arg0 ;
-(id)_orderedStagedIdentifiersIncludingPendingIdentifier:(id)arg0 ;
-(id)init;
-(id)mutableChangeObject;
-(id)orderedStagedIdentifiers;
-(id)packagesWithLivePhotoContent;
-(id)stagedPackageForIdentifier:(id)arg0 ;
-(id)stagedPackages;
-(void)_addPackageToStaging:(id)arg0 ;
-(void)_removePackageFromStagingWithIdentifier:(id)arg0 ;
-(void)addPendingPackageIdentifier:(id)arg0 ;
-(void)commitPackage:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)removeAllExpectedPackagesWithIdentifiers:(id)arg0 ;
-(void)removePendingPackageIdentifier:(id)arg0 ;
-(void)reportError:(id)arg0 ;
-(void)stagePackage:(id)arg0 ;
-(void)stagePackages:(id)arg0 ;
-(void)stagePackages:(id)arg0 andNotify:(BOOL)arg1 ;
-(void)unstagePackageWithIdentifier:(id)arg0 ;
-(void)unstagePackageWithIdentifier:(id)arg0 andNotify:(BOOL)arg1 ;
-(void)unstagePackagesWithIdentifiers:(id)arg0 ;


@end


#endif