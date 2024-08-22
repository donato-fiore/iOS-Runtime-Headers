// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMAV2BASEBANDHARDWAREMESSAGE_H
#define PLMAV2BASEBANDHARDWAREMESSAGE_H



#import "PLBasebandHardwareMessage.h"

@interface PLMav2BasebandHardwareMessage : PLBasebandHardwareMessage

@property (nonatomic) *_PLMav2BasebandHWStatsRX rx; // ivar: _mav2_rx
@property (nonatomic) *_PLMav2BasebandHWStatsTX tx; // ivar: _mav2_tx


-(id)indexToRAT:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)logHeaderWithLogger:(id)arg0 ;
-(void)logRFWithLogger2:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif