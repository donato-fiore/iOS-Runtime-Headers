// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATASTREAMBULKSENDSESSIONCANDIDATE_H
#define HMDDATASTREAMBULKSENDSESSIONCANDIDATE_H

@class NSDictionary, NSMutableArray, NSError;
@protocol HMDDataStreamBulkSendSessionCandidate;

#import <Foundation/Foundation.h>

#import "HMDDataStreamBulkSendProtocol.h"

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate>



@property (readonly, weak, nonatomic) HMDDataStreamBulkSendProtocol *bulkSendProtocol; // ivar: _bulkSendProtocol
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *pendingReads; // ivar: _pendingReads
@property (retain, nonatomic) NSError *receivedFailure; // ivar: _receivedFailure
@property (readonly, nonatomic) NSDictionary *requestHeader; // ivar: _requestHeader


-(id)initWithProtocol:(id)arg0 requestHeader:(id)arg1 metadata:(id)arg2 ;
-(void)acceptBulkSendSessionOnQueue:(id)arg0 callback:(id)arg1 ;
-(void)rejectBulkSendSessionWithStatus:(unsigned short)arg0 ;


@end


#endif