// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSTIMER_H
#define BPSTIMER_H

@protocol BPSPublisher;


#import "BPSPublisher.h"

@interface BPSTimer : BPSPublisher

@property (readonly, nonatomic) id *getTimestamp; // ivar: _getTimestamp
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


-(id)initWithUpstream:(id)arg0 interval:(CGFloat)arg1 getTimestamp:(id)arg2 ;
-(void)subscribe:(id)arg0 ;


@end


#endif