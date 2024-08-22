// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKRECORDZONE_H
#define FCCKRECORDZONE_H

@class CKRecordZoneID;
@protocol FCCKRecordZoneDelegate;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabase.h"

@interface FCCKRecordZone : NSObject {
    BOOL _zoneReady;
    CKRecordZoneID *_recordZoneID;
    FCCKPrivateDatabase *_database;
    id<FCCKRecordZoneDelegate> *_delegate;
}




-(id)description;


@end


#endif