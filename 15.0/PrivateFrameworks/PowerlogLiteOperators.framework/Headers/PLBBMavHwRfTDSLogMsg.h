// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBBMAVHWRFTDSLOGMSG_H
#define PLBBMAVHWRFTDSLOGMSG_H

@class NSMutableDictionary, NSString, NSNumber, NSArray;


#import "PLBasebandMessage.h"

@interface PLBBMavHwRfTDSLogMsg : PLBasebandMessage

@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSString *error; // ivar: _error
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration
@property (retain) NSArray *rxdStateCnt; // ivar: _rxdStateCnt
@property (retain) NSArray *srvcTypeCnt; // ivar: _srvcTypeCnt


+(id)entryEventBackwardDefinitionBBMavHwRfTDS;
-(id)init;
-(id)logEventBackwardBBMavHwRfTDS;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)populateEntry:(id)arg0 ;
-(void)refreshRequest;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif