// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMAMBIENTPRESSUREDATA_H
#define CMAMBIENTPRESSUREDATA_H

@class NSMeasurement;
@protocol SRSampleDirectExporting;


#import "CMLogItem.h"

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting>



@property (readonly, nonatomic) NSMeasurement *pressure; // ivar: _pressure
@property (readonly, nonatomic) NSMeasurement *temperature; // ivar: _temperature


+(BOOL)supportsSecureCoding;
-(BOOL)sr_prefersUTF8StringRepresentation;
-(NSInteger)sr_writeUTF8RepresentationToOutputStream:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPressure:(struct ? )arg0 andTimestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif