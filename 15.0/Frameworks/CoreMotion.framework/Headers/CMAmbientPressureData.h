// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMAMBIENTPRESSUREDATA_H
#define CMAMBIENTPRESSUREDATA_H

@protocol SRSampleDirectExporting;


#import "CMLogItem.h"

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting>

 {
    id *_internal;
}


@property (readonly, nonatomic) ? ambientPressure;


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