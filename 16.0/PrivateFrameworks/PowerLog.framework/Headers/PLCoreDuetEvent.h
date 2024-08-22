// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCOREDUETEVENT_H
#define PLCOREDUETEVENT_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PLCoreDuetEvent : NSObject

@property (retain) NSString *bundleID; // ivar: _bundleID
@property (retain) NSDictionary *childBundleIDToWeight; // ivar: _childBundleIDToWeight
@property (retain) NSArray *eventIntervals; // ivar: _eventIntervals
@property (retain) NSString *processName; // ivar: _processName
@property unsigned char updateType; // ivar: _updateType


-(id)description;


@end


#endif