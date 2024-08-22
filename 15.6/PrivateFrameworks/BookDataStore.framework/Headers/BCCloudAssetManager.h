// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCCLOUDASSETMANAGER_H
#define BCCLOUDASSETMANAGER_H

@class NSManagedObjectModel;
@protocol BDSCloudKitSupportSignOut, BCCloudAssetDetailManager, BCCloudAssetReviewManager, BCCloudReadingNowDetailManager, BCCloudStoreAssetManager;

#import <Foundation/Foundation.h>

#import "BCCloudAssetAnnotationManager.h"
#import "BCCloudDataSource.h"
#import "BCCloudChangeTokenController.h"
#import "BDSSaltVersionIdentifierManager.h"
#import "BDSServiceProxy.h"

@interface BCCloudAssetManager : NSObject <BDSCloudKitSupportSignOut>



@property (retain, nonatomic) BCCloudAssetAnnotationManager *assetAnnotationManager; // ivar: _assetAnnotationManager
@property (retain, nonatomic) BCCloudDataSource *assetDataSource; // ivar: _assetDataSource
@property (retain, nonatomic) NSObject<BCCloudAssetDetailManager> *assetDetailManager; // ivar: _assetDetailManager
@property (retain, nonatomic) NSObject<BCCloudAssetReviewManager> *assetReviewManager; // ivar: _assetReviewManager
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // ivar: _changeTokenController
@property (retain, nonatomic) NSManagedObjectModel *objectModel; // ivar: _objectModel
@property (nonatomic) BOOL proxyMode; // ivar: _proxyMode
@property (retain, nonatomic) NSObject<BCCloudReadingNowDetailManager> *readingNowDetailManager; // ivar: _readingNowDetailManager
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager; // ivar: _saltVersionIdentifierManager
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (retain, nonatomic) NSObject<BCCloudStoreAssetManager> *storeAssetManager; // ivar: _storeAssetManager


+(id)sharedClientXPCProxy;
+(id)sharedManager;
-(id)initClientXPCProxy;
-(void)dealloc;
-(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)setEnableCloudSync:(BOOL)arg0 enableReadingNowSync:(BOOL)arg1 ;


@end


#endif