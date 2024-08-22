// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRPROTOCOLRESTRICTEDINVOCATIONCHAIN_H
#define CRPROTOCOLRESTRICTEDINVOCATIONCHAIN_H

@class NSString, Protocol;
@protocol CRInvocationChainDelegate;


#import "CRInvocationChain.h"

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRInvocationChainDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Protocol *restrictingProtocol; // ivar: _restrictingProtocol
@property (readonly) Class superclass;


-(BOOL)_selector:(SEL)arg0 isPartOfProtocol:(id)arg1 ;
-(BOOL)_selectorIsPartOfRestrictingProtocol:(SEL)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)invocationChain:(id)arg0 shouldForwardInvocation:(id)arg1 toTarget:(id)arg2 ;
-(BOOL)isEligibleForSelector:(SEL)arg0 ;
-(id)init;


@end


#endif