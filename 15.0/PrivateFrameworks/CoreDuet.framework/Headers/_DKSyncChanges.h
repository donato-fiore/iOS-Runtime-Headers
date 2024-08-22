// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCCHANGES_H
#define _DKSYNCCHANGES_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface _DKSyncChanges : NSObject

@property (readonly, nonatomic) NSArray *additionChangeSets; // ivar: _additionChangeSets
@property (readonly, nonatomic) NSArray *deletionChangeSets; // ivar: _deletionChangeSets
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate




@end


#endif