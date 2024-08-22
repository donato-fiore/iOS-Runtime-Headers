// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBMAV16HWMSGPARSER_H
#define PLBBMAV16HWMSGPARSER_H



#import "PLBBMav13HwMsgParser.h"

@interface PLBBMav16HwMsgParser : PLBBMav13HwMsgParser

@property (nonatomic) *? mav16AppsPerf; // ivar: _mav16AppsPerf
@property (nonatomic) *? mav16AppsSleepVeto; // ivar: _mav16AppsSleepVeto
@property (nonatomic) *? mav16MpssSleepVeto; // ivar: _mav16MpssSleepVeto
@property (nonatomic) *? mav16QdspSpeed; // ivar: _mav16QdspSpeed
@property (nonatomic) *? rfEnhLTEMav16; // ivar: _rfEnhLTEMav16
@property (nonatomic) *? rfEnhWCDMAMav16; // ivar: _rfEnhWCDMAMav16


-(BOOL)parseData:(id)arg0 ;
-(void)logMav16AppsPerfWithLogger:(id)arg0 ;
-(void)logMav16HwRFEnhLTEWithLogger:(id)arg0 ;
-(void)logMav16HwRFEnhWCDMAWithLogger:(id)arg0 ;
-(void)logMav16MPSSWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;


@end


#endif