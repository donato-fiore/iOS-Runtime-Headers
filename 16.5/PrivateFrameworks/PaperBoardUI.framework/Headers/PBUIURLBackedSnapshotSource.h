// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIURLBACKEDSNAPSHOTSOURCE_H
#define PBUIURLBACKEDSNAPSHOTSOURCE_H

@class BSAtomicFlag, NSString, _UILegibilitySettings, NSURL, UIImage;
@protocol PBUIColorStatisticsDelegate, PBUIReplicaSnapshotSource, PBUIPosterReplicaSnapshotProviding, PBUIURLSourceDelegate;

#import <Foundation/Foundation.h>

#import "PBUIReplicaSourceObserverBox.h"
#import "PBUIColorStatistics.h"
#import "PBUIImageOnDiskFormat.h"

@interface PBUIURLBackedSnapshotSource : NSObject <PBUIColorStatisticsDelegate, PBUIReplicaSnapshotSource, PBUIPosterReplicaSnapshotProviding>

 {
    PBUIReplicaSourceObserverBox *_observers;
    os_unfair_lock_s _stateLock;
    BSAtomicFlag *_isFrozen;
    BSAtomicFlag *_isDirty;
    BSAtomicFlag *_needsColorSettingsUpdate;
}


@property (copy, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (readonly, copy, nonatomic) PBUIColorStatistics *contentColorStatistics; // ivar: _contentColorStatistics
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUIURLSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL effectsAreBakedIn;
@property (readonly, nonatomic) PBUIImageOnDiskFormat *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (retain, nonatomic) UIImage *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=setURL:) NSURL *url; // ivar: _url
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveColorStatistics;
-(BOOL)updateWithImage:(id)arg0 contentColorStatistics:(id)arg1 error:(*id)arg2 ;
-(id)buildCacheIdentifier;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)encoderForSnapshot;
-(id)initWithURL:(id)arg0 format:(id)arg1 metadataURL:(id)arg2 delegate:(id)arg3 ;
-(id)readFromDiskWithError:(*id)arg0 ;
-(id)registerSnapshotSourceObserver:(id)arg0 ;
-(id)snapshotSourceForObserver:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)colorStatisticsDidChange:(id)arg0 ;
-(void)notifyObservers;
-(void)notifyObserversIfNeeded;
-(void)performBatchUpdates:(id)arg0 ;
-(void)readColorStatisticsFromDisk;
-(void)updateColorStatisticsWith:(id)arg0 ;
-(void)updateFromDisk;


@end


#endif