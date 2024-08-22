// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONRECORDSDIFF_H
#define CALNNOTIFICATIONRECORDSDIFF_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CALNNotificationRecordsDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedRecords; // ivar: _addedRecords
@property (readonly, copy, nonatomic) NSArray *modifiedRecords; // ivar: _modifiedRecords
@property (readonly, copy, nonatomic) NSArray *removedRecords; // ivar: _removedRecords


+(id)diffWithAddedRecords:(id)arg0 removedRecords:(id)arg1 modifiedRecords:(id)arg2 ;
+(id)emptyDiff;
-(id)description;
-(id)initWithAddedRecords:(id)arg0 removedRecords:(id)arg1 modifiedRecords:(id)arg2 ;


@end


#endif