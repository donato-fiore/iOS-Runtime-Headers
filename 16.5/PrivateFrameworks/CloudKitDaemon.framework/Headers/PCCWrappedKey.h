// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCWRAPPEDKEY_H
#define PCCWRAPPEDKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PCCWrappedKey : NSObject

@property (retain) NSData *routingToken; // ivar: _routingToken
@property *pcc_wrapped_invocation_key wrappedInvocationKey; // ivar: _wrappedInvocationKey


-(id)data;
-(id)initWithKey:(id)arg0 permittedRemoteMeasurement:(id)arg1 attestation:(id)arg2 ;
-(void)clear;
-(void)dealloc;


@end


#endif