// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYMIGRATIONMANAGER_H
#define PFUBIQUITYMIGRATIONMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "PFUbiquityLocation.h"

@interface PFUbiquityMigrationManager : NSObject {
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    NSString *_localPeerID;
}




-(id)initWithDestinationModel:(id)arg0 sourceModel:(id)arg1 ubiquityRootLocation:(id)arg2 localPeerID:(id)arg3 ;
-(id)initWithDestinationModel:(id)arg0 storeName:(id)arg1 previousModelVersionHash:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4 ;
-(void)dealloc;


@end


#endif