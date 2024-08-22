// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMPROXYPROBE_H
#define MXMPROXYPROBE_H

@protocol NSSecureCoding;


#import "MXMProbe.h"
#import "MXMProxyMetric.h"

@interface MXMProxyProbe : MXMProbe <NSSecureCoding>



@property (readonly) MXMProxyMetric *proxyMetric; // ivar: _proxyMetric


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProxyMetric:(id)arg0 ;
-(id)sampleWithTimeout:(CGFloat)arg0 stopReason:(*NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)updateNowUntilStoppedWithUpdateHandler:(id)arg0 stopHandler:(unk)arg1  ;


@end


#endif