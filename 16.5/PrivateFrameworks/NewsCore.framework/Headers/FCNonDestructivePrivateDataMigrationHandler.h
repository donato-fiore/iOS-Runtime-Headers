// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNONDESTRUCTIVEPRIVATEDATAMIGRATIONHANDLER_H
#define FCNONDESTRUCTIVEPRIVATEDATAMIGRATIONHANDLER_H

@class NSArray;
@protocol FCNonDestructivePrivateDataActionProvider;

#import <Foundation/Foundation.h>


@interface FCNonDestructivePrivateDataMigrationHandler : NSObject

@property (retain, nonatomic) NSObject<FCNonDestructivePrivateDataActionProvider> *privateDataActionProvider; // ivar: _privateDataActionProvider
@property (copy, nonatomic) NSArray *privateDataControllers; // ivar: _privateDataControllers
@property (nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled; // ivar: _privateDataSyncingEnabled


-(id)init;
-(id)initWithPrivateDataActionProvider:(id)arg0 privateDataControllers:(id)arg1 privateDataSyncingEnabled:(BOOL)arg2 ;
-(void)handleMigrationWithPrivateDataDirectory:(id)arg0 ;


@end


#endif