// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOMESSAGE_H
#define IDSQRPROTOMESSAGE_H


#import <Foundation/Foundation.h>

#import "IDSQRProtoH3Message.h"

@interface IDSQRProtoMessage : NSObject {
    IDSQRProtoH3Message *_message;
}


@property (readonly, nonatomic) int messageType;
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) NSUInteger transactionID; // ivar: _transactionID


+(id)dataWithEmptyUnAllocBindResponse;
-(BOOL)_setupAllocbindRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupInfoRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupParticipantUpdateRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupPluginControlRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupPutmaterialRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupSessionInfoRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupStatsRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupTestRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(BOOL)_setupUnallocbindRequest:(id)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(id)allocbindResponse;
-(id)data;
-(id)diagnosticIndication;
-(id)errorIndication;
-(id)getMaterialResponse;
-(id)goAwayIndication;
-(id)infoResponse;
-(id)initWithData:(id)arg0 ;
-(id)initWithType:(int)arg0 candidatePair:(id)arg1 options:(id)arg2 ;
-(id)participantUpdateIndication;
-(id)participantUpdateResponse;
-(id)pluginControlIndication;
-(id)pluginControlResponse;
-(id)putMaterialIndication;
-(id)putMaterialResponse;
-(id)reallocateIndication;
-(id)sessionInfoIndication;
-(id)sessionInfoResponse;
-(id)statsResponse;
-(id)testResponse;
-(id)unallocbindResponse;


@end


#endif