// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCLOUDCOLLECTIONSMANAGER_H
#define BCCLOUDCOLLECTIONSMANAGER_H

@class NSManagedObjectModel;
@protocol BDSCloudKitSupportSignOut, BCCloudCollectionDetailManager, BCCloudCollectionMemberManager;

#import <Foundation/Foundation.h>

#import "BCCloudChangeTokenController.h"
#import "BCCloudDataSource.h"
#import "BDSSaltVersionIdentifierManager.h"
#import "BDSServiceProxy.h"

@interface BCCloudCollectionsManager : NSObject <BDSCloudKitSupportSignOut>



@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // ivar: _changeTokenController
@property (retain, nonatomic) BCCloudDataSource *collectionDataSource; // ivar: _collectionDataSource
@property (retain, nonatomic) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager; // ivar: _collectionDetailManager
@property (retain, nonatomic) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager; // ivar: _collectionMemberManager
@property (nonatomic) BOOL enableCloudSync;
@property (retain, nonatomic) NSManagedObjectModel *objectModel; // ivar: _objectModel
@property (nonatomic) BOOL proxyMode; // ivar: _proxyMode
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager; // ivar: _saltVersionIdentifierManager
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy


+(id)sharedClientXPCProxy;
+(id)sharedManager;
-(id)initClientXPCProxy;
-(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;


@end


#endif