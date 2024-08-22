// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXAPPRESPONSIVENESSMETRIC_H
#define MXAPPRESPONSIVENESSMETRIC_H



#import "MXMetric.h"
#import "MXHistogram.h"

@interface MXAppResponsivenessMetric : MXMetric

@property (readonly) MXHistogram *histogrammedApplicationHangTime; // ivar: _histogrammedApplicationHangTime


+(BOOL)supportsSecureCoding;
-(id)initWithAppResponsivenessData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif