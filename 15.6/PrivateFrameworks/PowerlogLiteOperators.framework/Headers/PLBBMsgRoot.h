// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBMSGROOT_H
#define PLBBMSGROOT_H

@class PLAgent, NSDate, NSDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PLBBMsgRoot : NSObject

@property (retain, nonatomic) PLAgent *agent; // ivar: _agent
@property (retain, nonatomic) NSDate *msgDate; // ivar: _msgDate
@property (retain, nonatomic) NSDictionary *msgEntry; // ivar: _msgEntry
@property (retain, nonatomic) NSDictionary *msgKVPairs; // ivar: _msgKVPairs
@property (retain, nonatomic) NSString *msgName; // ivar: _msgName
@property (retain, nonatomic) NSString *msgPayload; // ivar: _msgPayload
@property (retain, nonatomic) NSString *msgProcErr; // ivar: _msgProcErr
@property (retain, nonatomic) NSNumber *msgType; // ivar: _msgType


-(id)init;
-(void)appendToMsgProcError:(id)arg0 ;
-(void)sendAndLogPLEntry:(id)arg0 andOverride:(id)arg1 ;


@end


#endif