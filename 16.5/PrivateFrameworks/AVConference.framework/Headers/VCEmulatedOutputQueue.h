// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCEMULATEDOUTPUTQUEUE_H
#define VCEMULATEDOUTPUTQUEUE_H



#import "VCEmulatedNetworkElement.h"

@interface VCEmulatedOutputQueue : VCEmulatedNetworkElement

@property (readonly, nonatomic) unsigned int numberOfPacketsInOutputQueue; // ivar: _numberOfPacketsInOutputQueue


-(id)copyPacketFromPop;
-(void)connectFrom:(id)arg0 ;
-(void)runUntilTime:(CGFloat)arg0 ;


@end


#endif