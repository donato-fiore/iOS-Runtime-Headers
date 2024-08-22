// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGSAMPLERSTATE_H
#define MTLDEBUGSAMPLERSTATE_H

@class MTLSamplerDescriptor;


#import "MTLToolsSamplerState.h"

@interface MTLDebugSamplerState : MTLToolsSamplerState

@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor; // ivar: _descriptor


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithSamplerState:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(void)dealloc;


@end


#endif