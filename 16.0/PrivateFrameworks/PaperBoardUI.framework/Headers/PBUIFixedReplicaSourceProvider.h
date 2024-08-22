// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIFIXEDREPLICASOURCEPROVIDER_H
#define PBUIFIXEDREPLICASOURCEPROVIDER_H

@class NSString;
@protocol PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding, BSInvalidatable, PBUIReplicaPortalSource, PBUIReplicaSnapshotSource;

#import <Foundation/Foundation.h>

#import "PBUIReplicaSourceObserverBox.h"

@interface PBUIFixedReplicaSourceProvider : NSObject <PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding, BSInvalidatable>

 {
    PBUIReplicaSourceObserverBox *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<PBUIReplicaPortalSource> *portalSource; // ivar: _portalSource
@property (retain, nonatomic) NSObject<PBUIReplicaSnapshotSource> *snapshotSource; // ivar: _snapshotSource
@property (readonly) Class superclass;


-(id)init;
-(id)portalSourceForReplicaView:(id)arg0 ;
-(id)registerPortalSourceObserver:(id)arg0 ;
-(id)registerSnapshotSourceObserver:(id)arg0 ;
-(id)snapshotSourceForObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif