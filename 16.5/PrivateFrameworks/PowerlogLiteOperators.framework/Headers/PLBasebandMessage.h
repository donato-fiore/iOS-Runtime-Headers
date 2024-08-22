// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBASEBANDMESSAGE_H
#define PLBASEBANDMESSAGE_H

@class PLAgent, NSDate, PLBBMsg, NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface PLBasebandMessage : NSObject

@property (retain, nonatomic) PLAgent *agent; // ivar: _agent
@property (readonly, retain, nonatomic) NSDate *apTimestamp; // ivar: _apTimestamp
@property (readonly, retain, nonatomic) NSDate *calibratedTimestamp;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain) PLBBMsg *logger; // ivar: _logger
@property (retain) NSNumber *msgType; // ivar: _msgType
@property (retain) NSString *pload; // ivar: _pload
@property (readonly, retain, nonatomic) NSData *rawData; // ivar: rawData
@property (retain, nonatomic) NSNumber *seqNum; // ivar: _seqNum
@property (readonly, nonatomic) unsigned int ticksInGPSONState; // ivar: ticksInGPSONState
@property (readonly, nonatomic) unsigned int ticksInGoodState; // ivar: ticksInGoodState
@property CGFloat timeCal; // ivar: _timeCal
@property (nonatomic) CGFloat timeCalibration; // ivar: timeCalibration
@property (readonly, retain, nonatomic) NSDate *timestamp;


+(id)messageWithData:(id)arg0 ;
-(BOOL)isCalibratedDateGood;
-(BOOL)isTimestampValid:(char *)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;
-(void)logEntry:(id)arg0 withBody:(id)arg1 ;
-(void)logMsgAll;
-(void)logWithLogger:(id)arg0 ;


@end


#endif