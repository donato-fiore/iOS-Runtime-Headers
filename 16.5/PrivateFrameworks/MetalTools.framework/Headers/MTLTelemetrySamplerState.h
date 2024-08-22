// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTELEMETRYSAMPLERSTATE_H
#define MTLTELEMETRYSAMPLERSTATE_H

@class MTLSamplerDescriptor;


#import "MTLToolsSamplerState.h"

@interface MTLTelemetrySamplerState : MTLToolsSamplerState {
    BOOL isAniso;
}


@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor; // ivar: _descriptor


-(id)initWithBaseSamplerState:(id)arg0 device:(id)arg1 descriptor:(id)arg2 ;
-(void)dealloc;
-(void)setSamplerStatsWithDescriptor:(id)arg0 telemetryStat:(struct MTLTelemetrySamplerStatRec *)arg1 ;


@end


#endif