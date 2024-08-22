// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCLOUDCHANGETOKENCONTROLLER_H
#define BCCLOUDCHANGETOKENCONTROLLER_H

@class NSManagedObjectContext, NSString;
@protocol BCCloudKitChangeTokenStore;

#import <Foundation/Foundation.h>

#import "BCCloudKitController.h"

@interface BCCloudChangeTokenController : NSObject <BCCloudKitChangeTokenStore>



@property (weak, nonatomic) BCCloudKitController *cloudKitController; // ivar: _cloudKitController
@property (nonatomic) BOOL enableCloudSync; // ivar: _enableCloudSync
@property (weak, nonatomic) NSManagedObjectContext *moc; // ivar: _moc
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


-(BOOL)cloudSyncEnabled;
-(id)initWithMOC:(id)arg0 zoneName:(id)arg1 cloudKitController:(id)arg2 ;
-(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)serverChangeTokenWithCompletion:(id)arg0 ;
-(void)storeServerChangeToken:(id)arg0 completion:(id)arg1 ;
-(void)updateSaltVersionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)zoneNeedsUpdate:(id)arg0 completion:(id)arg1 ;


@end


#endif