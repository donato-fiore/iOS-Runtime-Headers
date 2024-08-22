// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSWITCHCLUSTERSWITCHLATCHEDEVENT_H
#define MTRSWITCHCLUSTERSWITCHLATCHEDEVENT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRSwitchClusterSwitchLatchedEvent : NSObject <NSCopying>



@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition; // ivar: _newPosition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif