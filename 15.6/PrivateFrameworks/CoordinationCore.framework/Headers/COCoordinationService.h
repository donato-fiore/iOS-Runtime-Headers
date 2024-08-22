// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCOORDINATIONSERVICE_H
#define COCOORDINATIONSERVICE_H

@class NSString, NSDictionary;
@protocol COServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "COMeshController.h"

@interface COCoordinationService : NSObject <COServiceDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _isMigrating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) COMeshController *homeMesh; // ivar: _homeMesh
@property (retain, nonatomic) NSDictionary *meshes; // ivar: _meshes
@property (retain, nonatomic) COMeshController *pairMesh; // ivar: _pairMesh
@property (readonly, nonatomic) CGFloat pingMaximum; // ivar: _pingMaximum
@property (readonly, nonatomic) CGFloat pingMinimum; // ivar: _pingMinimum
@property (retain, nonatomic) COMeshController *roomMesh; // ivar: _roomMesh
@property (readonly, nonatomic) NSDictionary *services; // ivar: _services
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) COMeshController *zoneMesh; // ivar: _zoneMesh


+(id)singleton;
+(void)setSingleton:(id)arg0 ;
+(void)startWithConstituentType:(NSUInteger)arg0 ;
-(id)_clusterNameForMeshController:(id)arg0 ;
-(id)_controllerForHomeKitEntity_unsafe:(id)arg0 label:(id)arg1 ;
-(id)_initWithConstituentType:(NSUInteger)arg0 ;
-(void)_completeMigration;
-(void)_continueInitialization;
-(void)_continueMigration;
-(void)_controllerForCluster_unsafe:(id)arg0 label:(id)arg1 result:(id)arg2 ;
-(void)_initializeAddOns;
-(void)_initializeServices;
-(void)_initiateMigrationFrom:(NSInteger)arg0 ;
-(void)_linkServices:(id)arg0 toMeshController:(id)arg1 forCluster:(id)arg2 ;
-(void)_linkServicesToMeshController:(id)arg0 ;
-(void)_significantHomeChange:(id)arg0 ;
-(void)_unlinkServicesFromMeshController:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)didStopMeshController:(id)arg0 ;
-(void)ensureOnDemandControllerForCluster:(id)arg0 completion:(id)arg1 ;


@end


#endif