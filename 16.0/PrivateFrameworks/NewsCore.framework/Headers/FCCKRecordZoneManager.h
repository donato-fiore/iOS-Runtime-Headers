// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKRECORDZONEMANAGER_H
#define FCCKRECORDZONEMANAGER_H

@class NSArray, NSDictionary, NSString;
@protocol FCCKRecordZoneDelegate;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabase.h"
#import "FCAsyncSerialQueue.h"

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate>

 {
    FCCKPrivateDatabase *_database;
    NSArray *_recordZoneIDs;
    NSDictionary *_fcRecordZonesByName;
    NSDictionary *_ckRecordZonesByID;
    FCAsyncSerialQueue *_serialQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)ensureRecordZoneExistsWithID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif