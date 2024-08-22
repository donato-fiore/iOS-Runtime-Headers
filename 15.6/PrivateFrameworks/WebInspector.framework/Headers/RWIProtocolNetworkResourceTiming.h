// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLNETWORKRESOURCETIMING_H
#define RWIPROTOCOLNETWORKRESOURCETIMING_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (nonatomic) CGFloat connectEnd;
@property (nonatomic) CGFloat connectStart;
@property (nonatomic) CGFloat domainLookupEnd;
@property (nonatomic) CGFloat domainLookupStart;
@property (nonatomic) CGFloat fetchStart;
@property (nonatomic) CGFloat redirectEnd;
@property (nonatomic) CGFloat redirectStart;
@property (nonatomic) CGFloat requestStart;
@property (nonatomic) CGFloat responseEnd;
@property (nonatomic) CGFloat responseStart;
@property (nonatomic) CGFloat secureConnectionStart;
@property (nonatomic) CGFloat startTime;


-(id)initWithStartTime:(CGFloat)arg0 redirectStart:(CGFloat)arg1 redirectEnd:(CGFloat)arg2 fetchStart:(CGFloat)arg3 domainLookupStart:(CGFloat)arg4 domainLookupEnd:(CGFloat)arg5 connectStart:(CGFloat)arg6 connectEnd:(CGFloat)arg7 secureConnectionStart:(CGFloat)arg8 requestStart:(CGFloat)arg9 responseStart:(CGFloat)arg10 responseEnd:(CGFloat)arg11 ;


@end


#endif