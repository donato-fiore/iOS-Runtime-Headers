// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBBMAVHWRFGSMLOGMSG_H
#define PLBBMAVHWRFGSMLOGMSG_H

@class NSMutableDictionary, NSArray, NSString, NSMutableArray, NSNumber;


#import "PLBasebandMessage.h"

@interface PLBBMavHwRfGSMLogMsg : PLBasebandMessage

@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSArray *connState; // ivar: _connState
@property (retain) NSString *error; // ivar: _error
@property (retain) NSMutableArray *groupArrEntries; // ivar: _groupArrEntries
@property (retain) NSString *groupEntryKey; // ivar: _groupEntryKey
@property (retain) NSString *groupID; // ivar: _groupID
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration


+(id)entryEventBackwardDefinitionBBMavHwRfGSM;
-(id)init;
-(id)logEventBackwardBBMavHwRfGSM;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)logEventBackwardGroupEntriesMav10BBHwRfWcdma;
-(void)populateEntry:(id)arg0 ;
-(void)refreshRequest;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif