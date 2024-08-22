// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKPUSHVALUETRANSACTION_H
#define SBKPUSHVALUETRANSACTION_H

@class NSString;
@protocol SBKKeyValuePayloadPair;


#import "SBKTransaction.h"

@interface SBKPushValueTransaction : SBKTransaction {
    BOOL _isRechedulable;
}


@property (readonly, nonatomic) NSObject<SBKKeyValuePayloadPair> *clientItemPayloadPair; // ivar: _clientItemPayloadPair
@property (readonly, nonatomic) NSString *clientItemVersionAnchor; // ivar: _clientItemVersionAnchor
@property (readonly, nonatomic) NSObject<SBKKeyValuePayloadPair> *requestItemPayloadPair; // ivar: _requestItemPayloadPair
@property (readonly, nonatomic) NSString *requestItemVersionAnchor; // ivar: _requestItemVersionAnchor
@property (readonly, nonatomic) NSString *resultDomainVersion; // ivar: _resultDomainVersion
@property (readonly, nonatomic) NSObject<SBKKeyValuePayloadPair> *resultItemPayloadPair; // ivar: _resultItemPayloadPair
@property (readonly, nonatomic) NSString *resultItemVersionAnchor; // ivar: _resultItemVersionAnchor
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)_resolveConflictBetweenClientPayloadPair:(id)arg0 andServerPayloadPair:(id)arg1 ;
-(id)clampsKey;
-(id)description;
-(id)initWithStoreBagContext:(id)arg0 clientItemPayloadPair:(id)arg1 clientItemVersionAnchor:(id)arg2 ;
-(id)newRequest;
-(void)processDataInResponse:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif