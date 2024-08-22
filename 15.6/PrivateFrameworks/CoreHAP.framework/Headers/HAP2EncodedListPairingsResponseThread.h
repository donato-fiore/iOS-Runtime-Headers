// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ENCODEDLISTPAIRINGSRESPONSETHREAD_H
#define HAP2ENCODEDLISTPAIRINGSRESPONSETHREAD_H

@class NSString, NSArray;
@protocol HAP2EncodedListPairingsResponse;


#import "HAP2EncodedResponseThread.h"

@interface HAP2EncodedListPairingsResponseThread : HAP2EncodedResponseThread <HAP2EncodedListPairingsResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *pairings; // ivar: _pairings
@property (readonly) Class superclass;


-(id)initWithBTLEResponse:(id)arg0 pairings:(id)arg1 ;


@end


#endif