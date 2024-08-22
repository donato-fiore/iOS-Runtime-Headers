// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGHARVESTQUEUEMETRICSTIMER_H
#define SGHARVESTQUEUEMETRICSTIMER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGHarvestQueueMetricsTimer : NSObject {
    NSUInteger _cpuStart;
    NSUInteger _cpuEnd;
    NSUInteger _durationStart;
    NSUInteger _signpostId;
}


@property (readonly, nonatomic) CGFloat cpu; // ivar: _cpu
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL significantWork; // ivar: _significantWork


-(id)description;
-(id)initWithName:(id)arg0 ;
-(void)applyAdjustmentIfSane:(id)arg0 ;
-(void)done:(BOOL)arg0 ;


@end


#endif