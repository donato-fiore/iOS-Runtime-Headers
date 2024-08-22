// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCIDRSCHEDULERITEM_H
#define VCIDRSCHEDULERITEM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VCIDRSchedulerItem : NSObject

@property (nonatomic) unsigned int budgetInCaptureFrames; // ivar: _budgetInCaptureFrames
@property (nonatomic) unsigned int framePosition; // ivar: _framePosition
@property (readonly, nonatomic) NSArray *streams; // ivar: _streams
@property (nonatomic) unsigned int weightFactor; // ivar: _weightFactor


-(NSInteger)compareBudget:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addStream:(id)arg0 ;
-(void)dealloc;


@end


#endif