// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMCLOCKMETRIC_H
#define MXMCLOCKMETRIC_H



#import "MXMMetric.h"
#import "MXMSampleTag.h"
#import "MXMInstrument.h"

@interface MXMClockMetric : MXMMetric {
    MXMSampleTag *_tag;
}


@property (readonly, nonatomic) MXMInstrument *instrument;


+(BOOL)supportsSecureCoding;
+(id)absoluteTime;
+(id)allTime;
+(id)continuousTime;
-(BOOL)_shouldConstructProbe;
-(BOOL)harvestData:(*id)arg0 error:(*id)arg1 ;
-(id)_unit;
-(id)_unitWithTag:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTag:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif