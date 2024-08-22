// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBMSGALL_H
#define PLBBMSGALL_H

@class NSDate, NSString, NSMutableDictionary, NSNumber;


#import "PLBBMsgRoot.h"

@interface PLBBMsgAll : PLBBMsgRoot

@property (retain) NSDate *bbDate; // ivar: _bbDate
@property (retain) NSString *error; // ivar: _error
@property (retain) NSDate *ibbDate; // ivar: _ibbDate
@property (retain) NSString *ierror; // ivar: _ierror
@property (retain) NSString *ieventCode; // ivar: _ieventCode
@property (retain) NSMutableDictionary *info; // ivar: _info
@property (retain) NSString *ipayload; // ivar: _ipayload
@property (retain) NSNumber *iseqNum; // ivar: _iseqNum
@property (retain) NSString *payload; // ivar: _payload
@property (retain) NSNumber *seqNum; // ivar: _seqNum


+(id)entryEventNoneBBMsgAll;
-(void)logEventNoneBBMsgAll;
-(void)refreshBBMsgAll;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setISeqNum:(id)arg0 ;


@end


#endif