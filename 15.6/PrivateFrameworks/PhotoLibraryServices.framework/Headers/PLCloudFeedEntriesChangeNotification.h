// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDFEEDENTRIESCHANGENOTIFICATION_H
#define PLCLOUDFEEDENTRIESCHANGENOTIFICATION_H

@class NSSet;


#import "PLChangeNotification.h"

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *deletedEntries; // ivar: _deletedEntries
@property (copy, nonatomic) NSSet *insertedEntries; // ivar: _insertedEntries
@property (nonatomic) BOOL shouldReload; // ivar: _shouldReload
@property (copy, nonatomic) NSSet *updatedEntries; // ivar: _updatedEntries


+(id)notificationWithFullReload;
+(id)notificationWithInsertedEntries:(id)arg0 updatedEntries:(id)arg1 deletedEntries:(id)arg2 ;
-(id)_initWithFullReload;
-(id)_initWithInsertedEntries:(id)arg0 updatedEntries:(id)arg1 deletedEntries:(id)arg2 ;
-(id)name;
-(id)object;
-(id)userInfo;


@end


#endif