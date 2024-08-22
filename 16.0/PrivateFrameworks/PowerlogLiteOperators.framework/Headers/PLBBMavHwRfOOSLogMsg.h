// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBBMAVHWRFOOSLOGMSG_H
#define PLBBMAVHWRFOOSLOGMSG_H

@class NSMutableDictionary, NSString, NSNumber, NSArray;


#import "PLBasebandMessage.h"

@interface PLBBMavHwRfOOSLogMsg : PLBasebandMessage

@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSString *error; // ivar: _error
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration
@property (retain) NSArray *oosGsmPssiStatTicks; // ivar: _oosGsmPssiStatTicks
@property (retain) NSArray *oosGsmPssiTimes; // ivar: _oosGsmPssiTimes
@property unsigned char oosInProgress; // ivar: _oosInProgress
@property (retain) NSArray *oosLtePssiStatTicks; // ivar: _oosLtePssiStatTicks
@property (retain) NSArray *oosLtePssiTimes; // ivar: _oosLtePssiTimes
@property (retain) NSArray *oosTdsPssiStatTicks; // ivar: _oosTdsPssiStatTicks
@property (retain) NSArray *oosTdsPssiTimes; // ivar: _oosTdsPssiTimes
@property (retain) NSNumber *oosTicks; // ivar: _oosTicks
@property (retain) NSNumber *oosTimes; // ivar: _oosTimes
@property (retain) NSArray *oosWcdmaPssiStatTicks; // ivar: _oosWcdmaPssiStatTicks
@property (retain) NSArray *oosWcdmaPssiTimes; // ivar: _oosWcdmaPssiTimes
@property (retain) NSNumber *pssiTicks; // ivar: _pssiTicks


+(id)entryEventBackwardDefinitionOOSPerRat;
-(id)init;
-(id)logEventBackwardBBMavHwRfOos;
-(void)populateEntry:(id)arg0 ;
-(void)refreshBBMavHwRfOOS;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif