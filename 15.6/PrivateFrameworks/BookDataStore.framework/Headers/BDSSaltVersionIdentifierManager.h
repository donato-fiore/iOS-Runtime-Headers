// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BDSSALTVERSIONIDENTIFIERMANAGER_H
#define BDSSALTVERSIONIDENTIFIERMANAGER_H

@class NSString;
@protocol BCCloudKitDatabaseZoneObserver, BDSCloudKitSupportZoneRecovery;

#import <Foundation/Foundation.h>

#import "BCCloudChangeTokenController.h"

@interface BDSSaltVersionIdentifierManager : NSObject <BCCloudKitDatabaseZoneObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) BCCloudChangeTokenController *tokenController; // ivar: _tokenController
@property (weak, nonatomic) NSObject<BDSCloudKitSupportZoneRecovery> *zoneDataManager; // ivar: _zoneDataManager
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


-(id)initWithZoneDataManager:(id)arg0 tokenController:(id)arg1 databaseController:(id)arg2 ;
-(void)databaseController:(id)arg0 saltVersionIdentifierChanged:(id)arg1 completion:(id)arg2 ;


@end


#endif