// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEATHERCLOUDMIGRATOR_H
#define WEATHERCLOUDMIGRATOR_H


#import <Foundation/Foundation.h>

#import "WeatherDeviceLookup.h"

@interface WeatherCloudMigrator : NSObject

@property (readonly, nonatomic) WeatherDeviceLookup *deviceLookup; // ivar: _deviceLookup


-(BOOL)storeRequiresMigration:(id)arg0 ;
-(id)init;
-(void)eraseStoreIfNeeded:(id)arg0 ;
-(void)migrateStore:(id)arg0 toStore:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif