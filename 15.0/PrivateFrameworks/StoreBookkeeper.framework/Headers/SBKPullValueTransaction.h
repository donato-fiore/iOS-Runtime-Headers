// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKPULLVALUETRANSACTION_H
#define SBKPULLVALUETRANSACTION_H

@class NSString;
@protocol SBKKeyValuePayloadPair;


#import "SBKTransaction.h"

@interface SBKPullValueTransaction : SBKTransaction

@property (readonly, nonatomic) NSObject<SBKKeyValuePayloadPair> *clientItemPayloadPair; // ivar: _clientItemPayloadPair
@property (readonly, nonatomic) NSString *clientItemVersionAnchor; // ivar: _clientItemVersionAnchor
@property (readonly, copy, nonatomic) NSString *requestedKey; // ivar: _requestedKey
@property (readonly, nonatomic) NSString *resultDomainVersion; // ivar: _resultDomainVersion
@property (readonly, nonatomic) NSObject<SBKKeyValuePayloadPair> *resultItemPayloadPair; // ivar: _resultItemPayloadPair
@property (readonly, nonatomic) NSString *resultItemVersionAnchor; // ivar: _resultItemVersionAnchor
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)clampsKey;
-(id)description;
-(id)initWithStoreBagContext:(id)arg0 requestedKey:(id)arg1 clientItemPayloadPair:(id)arg2 clientItemVersionAnchor:(id)arg3 ;
-(id)newRequest;
-(void)processDataInResponse:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif