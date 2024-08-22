// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBMSGHANDLER_H
#define PLBBMSGHANDLER_H

@class PLAgent, NSDate, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface PLBBMsgHandler : NSObject

@property (retain, nonatomic) PLAgent *agent; // ivar: _agent
@property (readonly, retain, nonatomic) NSDate *apTimestamp; // ivar: _apTimestamp
@property (readonly, retain, nonatomic) NSDate *calibratedTimestamp; // ivar: _calibratedTimestamp
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSData *rawData; // ivar: _rawData
@property (retain, nonatomic) NSNumber *seqNum; // ivar: _seqNum
@property (readonly, nonatomic) unsigned int ticksInGPSONState; // ivar: _ticksInGPSONState
@property (readonly, nonatomic) unsigned int ticksInGoodState; // ivar: _ticksInGoodState
@property (nonatomic) CGFloat timeCalibration; // ivar: _timeCalibration
@property (readonly, retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)getMsgHandler;
-(id)decodeMsgHeader;
-(id)init;
-(void)handleMsg:(id)arg0 forAgent:(id)arg1 ;
-(void)registerWithHandlerAs:(id)arg0 forType:(NSUInteger)arg1 ;


@end


#endif