// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLECLIENTCONTEXT_H
#define HMMUTABLECLIENTCONTEXT_H

@class NSString;


#import "HMClientContext.h"

@interface HMMutableClientContext : HMClientContext

@property (retain, nonatomic) NSString *metricIdentifier;


+(id)clientContextWithMetricIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMetricIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif