// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLSUBSCRIBEON_H
#define BMDSLSUBSCRIBEON_H

@class BPSPublisher;
@protocol BMDSLScheduler;


#import "BMDSL.h"

@interface BMDSLSubscribeOn : BPSPublisher

@property (readonly, nonatomic) NSObject<BMDSLScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream


-(id)initWithUpstream:(id)arg0 scheduler:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif