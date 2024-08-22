// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHCLUSTERSQLITEDATASTORE_H
#define SHCLUSTERSQLITEDATASTORE_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "SHClusterStatus.h"

@interface SHClusterSQLiteDataStore : NSObject

@property (readonly, nonatomic) NSInteger clusterType; // ivar: _clusterType
@property (readonly, nonatomic) SHClusterStatus *dataStatus;
@property (readonly, nonatomic) NSURL *databaseFilePathURL; // ivar: _databaseFilePathURL
@property (readonly, nonatomic) CGFloat databaseMaxAge; // ivar: _databaseMaxAge
@property (readonly, nonatomic) NSString *requiredStorefront; // ivar: _requiredStorefront


+(BOOL)sqliteDatabaseExistsAtURL:(id)arg0 ;
-(BOOL)hasNotPassedExpiryDate:(id)arg0 isForCountryCode:(id)arg1 ;
-(BOOL)isDataLoaded;
-(BOOL)isDataValid;
-(id)initWithClusterType:(NSInteger)arg0 databaseMaxAge:(CGFloat)arg1 forStorefront:(id)arg2 databaseFilePathURL:(id)arg3 ;


@end


#endif