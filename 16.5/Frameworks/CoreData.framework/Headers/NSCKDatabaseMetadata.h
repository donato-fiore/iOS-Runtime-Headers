// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCKDATABASEMETADATA_H
#define NSCKDATABASEMETADATA_H

@class CKServerChangeToken, NSString, NSNumber, NSDate, NSSet;


#import "NSManagedObject.h"

@interface NSCKDatabaseMetadata : NSManagedObject

@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSString *databaseName;
@property (nonatomic) NSInteger databaseScope;
@property (retain, nonatomic) NSNumber *databaseScopeNum;
@property (nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (retain, nonatomic) NSSet *recordZones;


+(id)entityPath;


@end


#endif