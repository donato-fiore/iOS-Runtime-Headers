// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEANALYTICSGROUP_H
#define _ANEANALYTICSGROUP_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface _ANEAnalyticsGroup : NSObject

@property (readonly, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSArray *layerInfo; // ivar: _layerInfo
@property (readonly, nonatomic) NSArray *taskInfo; // ivar: _taskInfo


+(id)objectWithID:(id)arg0 layers:(id)arg1 tasks:(id)arg2 ;
-(id)initWithID:(id)arg0 layers:(id)arg1 tasks:(id)arg2 ;
-(id)serialize;


@end


#endif