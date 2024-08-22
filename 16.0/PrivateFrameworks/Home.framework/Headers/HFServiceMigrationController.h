// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICEMIGRATIONCONTROLLER_H
#define HFSERVICEMIGRATIONCONTROLLER_H

@class HMHome;

#import <Foundation/Foundation.h>

#import "HFHomeKitDispatcher.h"

@interface HFServiceMigrationController : NSObject

@property (retain, nonatomic) HFHomeKitDispatcher *dispatcher; // ivar: _dispatcher
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger timeoutOverride; // ivar: _timeoutOverride


+(BOOL)homeNeedsMigration:(id)arg0 ;
+(id)accessoriesToMigrateFavoritesForHome:(id)arg0 ;
+(id)primaryServicesToMigrateForHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)migrateServicesToAccessory;


@end


#endif