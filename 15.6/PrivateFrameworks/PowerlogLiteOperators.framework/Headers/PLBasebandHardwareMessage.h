// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBASEBANDHARDWAREMESSAGE_H
#define PLBASEBANDHARDWAREMESSAGE_H



#import "PLBasebandMessage.h"

@interface PLBasebandHardwareMessage : PLBasebandMessage

@property (nonatomic) *_PLBasebandHWOnOffComponentStats adm; // ivar: _adm
@property (nonatomic) *_PLBasebandHWStatsADSP adsp; // ivar: _adsp
@property (nonatomic) *_PLBasebandHWStatsARMPerf armPerf; // ivar: _armPerf
@property (nonatomic) *_PLBasebandHWOnOffComponentStats gps; // ivar: _gps
@property (nonatomic) *_PLBasebandHWStatsHeader header; // ivar: _header
@property (readonly, nonatomic) unsigned int level;
@property unsigned int logDuration; // ivar: _duration
@property (nonatomic) *_PLBasebandHWOnOffComponentStats mdm; // ivar: _mdm
@property (nonatomic) *_PLBasebandHWStatsMDSP mdsp; // ivar: _mdsp
@property (readonly, nonatomic) unsigned int revision;
@property (nonatomic) *_PLBasebandHWStatsRXRSSI rx; // ivar: _rx
@property (nonatomic) *_PLBasebandHWOnOffComponentStats spi; // ivar: _spi
@property (nonatomic) *_PLBasebandHWStatsSystem system; // ivar: _system
@property (nonatomic) *_PLBasebandHWStatsTXPower tx; // ivar: _tx
@property (nonatomic) *_PLBasebandHWStatsUART uart; // ivar: _uart
@property (nonatomic) *_PLBasebandHWOnOffComponentStats usb; // ivar: _usb


-(BOOL)parseData:(id)arg0 ;
-(id)convertToObjectArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 ;
-(id)convertToObjectArrayPercentage:(*unsigned int)arg0 ofSize:(unsigned int)arg1 ;
-(id)convertUint16ArrayToNSArray:(*unsigned short)arg0 ofSize:(unsigned int)arg1 ;
-(id)convertUint32ArrayToNSArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 ;
-(id)convertUint32ArrayToNSArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 andFill:(unsigned int)arg2 ;
-(id)convertUint64ArrayToNSArray:(*NSUInteger)arg0 ofSize:(unsigned int)arg1 ;
-(id)convertUint8ArrayToNSArray:(char *)arg0 ofSize:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 ;
-(unsigned int)sumHardwareStat:(*unsigned int)arg0 ofSize:(unsigned int)arg1 ;
-(void)formatArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 inString:(id)arg2 ;
-(void)formatArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 inString:(id)arg2 inReverse:(BOOL)arg3 ;
-(void)formatArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 withMultiplier:(float)arg2 inString:(id)arg3 ;
-(void)formatArray:(*unsigned int)arg0 ofSize:(unsigned int)arg1 withMultiplier:(float)arg2 inString:(id)arg3 inReverse:(BOOL)arg4 ;
-(void)formatOnOffStates:(struct _PLBasebandHWOnOffComponentStats *)arg0 inString:(id)arg1 ;
-(void)logHeaderWithLogger:(id)arg0 ;
-(void)logModemAppWithLogger:(id)arg0 ;
-(void)logPeripheralsWithLogger:(id)arg0 ;
-(void)logProcessorWithLogger:(id)arg0 ;
-(void)logRFWithLogger2:(id)arg0 ;
-(void)logRawWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;


@end


#endif