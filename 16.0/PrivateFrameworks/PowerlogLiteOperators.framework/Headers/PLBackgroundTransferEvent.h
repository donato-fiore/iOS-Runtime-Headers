// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDTRANSFEREVENT_H
#define PLBACKGROUNDTRANSFEREVENT_H

@class NSString, NSDate, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PLBackgroundTransferEvent : NSObject

@property (retain) NSString *bundleID; // ivar: _bundleID
@property (retain) NSDate *startDate; // ivar: _startDate
@property (retain) NSMutableSet *taskUUIDs; // ivar: _taskUUIDs


-(id)description;


@end


#endif