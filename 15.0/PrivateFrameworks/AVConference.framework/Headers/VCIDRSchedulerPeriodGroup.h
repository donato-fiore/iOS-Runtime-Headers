// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCIDRSCHEDULERPERIODGROUP_H
#define VCIDRSCHEDULERPERIODGROUP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCIDRSchedulerPeriodGroup : NSObject {
    unsigned int _framesPerBasePeriod;
    NSMutableArray *_streams;
    NSMutableArray *_schedulerItems;
}


@property (readonly, nonatomic) unsigned int basePeriodCount; // ivar: _basePeriodCount


-(id)computeScheduleItemList;
-(id)description;
-(id)initWithPeriodCount:(unsigned int)arg0 framesPerBasePeriod:(unsigned int)arg1 ;
-(void)addStream:(id)arg0 ;
-(void)computeStreamsIDRPosition;
-(void)dealloc;


@end


#endif