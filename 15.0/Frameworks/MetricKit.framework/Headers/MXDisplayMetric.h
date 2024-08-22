// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXDISPLAYMETRIC_H
#define MXDISPLAYMETRIC_H



#import "MXMetric.h"
#import "MXAverage.h"

@interface MXDisplayMetric : MXMetric

@property (readonly) MXAverage *averagePixelLuminance; // ivar: _averagePixelLuminance


+(BOOL)supportsSecureCoding;
-(id)initWithAveragePictureLevel:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif