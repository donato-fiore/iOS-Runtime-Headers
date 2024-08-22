// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSTHROTTLE_H
#define BPSTHROTTLE_H

@protocol BPSPublisher;


#import "BPSPublisher.h"

@interface BPSThrottle : BPSPublisher

@property (readonly, nonatomic) id *getTimestamp; // ivar: _getTimestamp
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) BOOL latest; // ivar: _latest
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


-(id)initWithUpstream:(id)arg0 interval:(CGFloat)arg1 latest:(BOOL)arg2 getTimestamp:(id)arg3 ;
-(void)subscribe:(id)arg0 ;


@end


#endif