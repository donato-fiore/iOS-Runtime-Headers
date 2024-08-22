// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSYNCEDDEFAULTSINFO_H
#define HDSPSYNCEDDEFAULTSINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSPSyncedDefaultsInfo : NSObject

@property (readonly, copy, nonatomic) NSString *cloudDataVersionKey; // ivar: _cloudDataVersionKey
@property (readonly, nonatomic) NSString *cloudSyncEnabledKey; // ivar: _cloudSyncEnabledKey
@property (readonly, nonatomic) NSUInteger currentCloudDataVersion; // ivar: _currentCloudDataVersion
@property (readonly, nonatomic) NSUInteger currentDataVersion; // ivar: _currentDataVersion
@property (readonly, nonatomic) NSUInteger currentLocalDataVersion; // ivar: _currentLocalDataVersion
@property (readonly, copy, nonatomic) NSString *dataVersionKey; // ivar: _dataVersionKey
@property (readonly, copy, nonatomic) NSString *localDataVersionKey; // ivar: _localDataVersionKey


-(id)initWithDataVersionKey:(id)arg0 currentDataVersion:(NSUInteger)arg1 cloudDataVersionKey:(id)arg2 currentCloudDataVersion:(NSUInteger)arg3 cloudSyncEnabledKey:(id)arg4 localDataVersionKey:(id)arg5 currentLocalDataVersion:(NSUInteger)arg6 ;


@end


#endif