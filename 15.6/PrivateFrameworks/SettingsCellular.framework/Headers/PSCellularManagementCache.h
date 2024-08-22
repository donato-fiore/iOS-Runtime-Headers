// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSCELLULARMANAGEMENTCACHE_H
#define PSCELLULARMANAGEMENTCACHE_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>

#import "Logger.h"

@interface PSCellularManagementCache : NSObject {
    Logger *_logger;
}


@property (readonly, nonatomic) BOOL hasManagedCellularData;
@property (readonly, nonatomic) BOOL isGlobalDataModificationRestricted;
@property (retain) NSSet *managedCellDataAppCache; // ivar: _managedCellDataAppCache
@property (readonly, nonatomic) NSString *mdmName;


+(id)sharedInstance;
-(BOOL)isManaged:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)managedAppBundleIDs;
-(id)managedCellDataAppBundleIDs;
-(void)clearCache;
-(void)managedConfigurationProfileListDidChange;
-(void)managedConfigurationSettingsDidChange;
-(void)willEnterForeground;


@end


#endif