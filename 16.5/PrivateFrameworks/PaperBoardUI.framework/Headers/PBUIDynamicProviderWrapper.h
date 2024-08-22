// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIDYNAMICPROVIDERWRAPPER_H
#define PBUIDYNAMICPROVIDERWRAPPER_H

@class NSString;
@protocol PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "PBUIReplicaSourceObserverBox.h"

@interface PBUIDynamicProviderWrapper : NSObject <PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding, BSInvalidatable>

 {
    id *_makePortalProvider;
    PBUIReplicaSourceObserverBox *_portalObservers;
    id<BSInvalidatable> *_portalObserver;
    id *_makeSnapshotProvider;
    PBUIReplicaSourceObserverBox *_snapshotObservers;
    id<BSInvalidatable> *_snapshotObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) id *rootObject; // ivar: _rootObject
@property (readonly) Class superclass;


-(id)_portalProvider;
-(id)_snapshotProvider;
// -(id)initWithRootObject:(id)arg0 portalProvider:(id)arg1 snapshotProvider:(unk)arg2  ;
-(id)portalSourceForReplicaView:(id)arg0 ;
-(id)registerPortalSourceObserver:(id)arg0 ;
-(id)registerSnapshotSourceObserver:(id)arg0 ;
-(id)snapshotSourceForObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif