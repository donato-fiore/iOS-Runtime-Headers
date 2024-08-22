// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBMAV16BHWMSGPARSER_H
#define PLBBMAV16BHWMSGPARSER_H



#import "PLBBMav13HwMsgParser.h"

@interface PLBBMav16BHwMsgParser : PLBBMav13HwMsgParser

@property (nonatomic) *? mav16BAppsPerf; // ivar: _mav16BAppsPerf
@property (nonatomic) *? mav16BAppsSleepVeto; // ivar: _mav16BAppsSleepVeto
@property (nonatomic) *? mav16BMpssSleepVeto; // ivar: _mav16BMpssSleepVeto
@property (nonatomic) *? mav16BQdspSpeed; // ivar: _mav16BQdspSpeed
@property (nonatomic) *? mcpmSleepVetoMav16B; // ivar: _mcpmSleepVetoMav16B
@property (nonatomic) *? rfEnhLTEMav16B; // ivar: _rfEnhLTEMav16B
@property (nonatomic) *? rfEnhWCDMAMav16B; // ivar: _rfEnhWCDMAMav16B


-(BOOL)parseData:(id)arg0 ;
-(void)logMav16BAppsPerfWithLogger:(id)arg0 ;
-(void)logMav16BHwRFEnhLTEWithLogger:(id)arg0 ;
-(void)logMav16BMPSSWithLogger:(id)arg0 ;
-(void)logMav16HwRFEnhWCDMAWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;


@end


#endif