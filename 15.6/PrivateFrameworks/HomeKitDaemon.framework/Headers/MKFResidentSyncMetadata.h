// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFRESIDENTSYNCMETADATA_H
#define MKFRESIDENTSYNCMETADATA_H

@class MKFObject, NSPersistentHistoryToken, NSDate;


#import "_MKFHome.h"

@interface MKFResidentSyncMetadata : MKFObject

@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSPersistentHistoryToken *lastSeenToken;
@property (copy, nonatomic) NSDate *lastSyncTimestamp;
@property (retain, nonatomic) NSPersistentHistoryToken *lastSyncToken;


+(id)fetchRequest;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;


@end


#endif