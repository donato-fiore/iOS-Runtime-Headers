// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBMAVHWRF1XLOGMSG_H
#define PLBBMAVHWRF1XLOGMSG_H

@class NSDate, NSNumber, NSArray, NSMutableDictionary, NSString;


#import "PLBasebandMessage.h"

@interface PLBBMavHwRf1xLogMsg : PLBasebandMessage

@property (retain) NSDate *bbDate; // ivar: _bbDate
@property (retain) NSNumber *bbSeqnum; // ivar: _bbSeqnum
@property *CGFloat bbTimeCal; // ivar: _bbTimeCal
@property (retain) NSArray *callTypeDur; // ivar: _callTypeDur
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSNumber *dtxOff; // ivar: _dtxOff
@property (retain) NSNumber *dtxOn; // ivar: _dtxOn
@property (retain) NSString *error; // ivar: _error
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration


+(id)entryEventBackwardDefinitionBBMavHwRf1x;
-(id)init;
-(id)logEventBackwardBBMavHwRf1x;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)populateEntry:(id)arg0 ;
-(void)refreshRequest;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif