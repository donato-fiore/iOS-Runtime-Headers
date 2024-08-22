// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCIDRSCHEDULER_H
#define VCIDRSCHEDULER_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface VCIDRScheduler : NSObject {
    NSMutableDictionary *_schedulerGroups;
    NSMutableArray *_schedulerItems;
    NSArray *_streams;
    unsigned int _framesPerBasePeriod;
}


@property (readonly, nonatomic) unsigned int basePeriodMs; // ivar: _basePeriodMs
@property (readonly, nonatomic) unsigned int captureFramerate; // ivar: _captureFramerate


+(unsigned int)computeGcdForX:(unsigned int)arg0 y:(unsigned int)arg1 ;
-(BOOL)computeCaptureFramerate;
-(id)description;
-(id)initWithStreams:(id)arg0 captureFramerate:(unsigned int)arg1 ;
-(void)computeBasePeriod;
-(void)computeGroupList;
-(void)computeSchedulerItemList;
-(void)computeSchedulerItemsBudget;
-(void)computeSchedulerItemsPosition;
-(void)computeStreamsIDRPosition;
-(void)dealloc;
-(void)placeRemainingItems:(id)arg0 placedItems:(id)arg1 leftItem:(id)arg2 rightItem:(id)arg3 ;
-(void)realignStreams;


@end


#endif