// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKPRIVATEFETCHDATABASECHANGESSINGLEDESTINATIONRESULT_H
#define FCCKPRIVATEFETCHDATABASECHANGESSINGLEDESTINATIONRESULT_H

@class NSArray, NSError, CKServerChangeToken;

#import <Foundation/Foundation.h>


@interface FCCKPrivateFetchDatabaseChangesSingleDestinationResult : NSObject

@property (retain, nonatomic) NSArray *changedZoneIDs; // ivar: _changedZoneIDs
@property (retain, nonatomic) NSArray *deletedZoneIDs; // ivar: _deletedZoneIDs
@property (nonatomic) NSInteger destination; // ivar: _destination
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL moreComing; // ivar: _moreComing
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken




@end


#endif