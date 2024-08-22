// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSDEBOUNCE_H
#define BPSDEBOUNCE_H

@protocol BPSPublisher;


#import "BPSPublisher.h"

@interface BPSDebounce : BPSPublisher

@property (readonly, nonatomic) CGFloat dueTime; // ivar: _dueTime
@property (readonly, nonatomic) id *getTimestamp; // ivar: _getTimestamp
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


-(id)initWithUpstream:(id)arg0 for:(CGFloat)arg1 getTimestamp:(id)arg2 ;
-(void)subscribe:(id)arg0 ;


@end


#endif