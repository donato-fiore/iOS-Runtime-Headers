// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNDONATIONAGENTXPCMETHODSCOPE_H
#define _CNDONATIONAGENTXPCMETHODSCOPE_H

@class CNPromise;
@protocol DonationAgentProtocol;

#import <Foundation/Foundation.h>


@interface _CNDonationAgentXPCMethodScope : NSObject

@property (readonly, nonatomic) CNPromise *promise; // ivar: _promise
@property (readonly, nonatomic) NSObject<DonationAgentProtocol> *proxy; // ivar: _proxy


-(id)init;
-(id)initWithConnection:(id)arg0 promise:(id)arg1 proxy:(id)arg2 ;
-(id)initWithPromise:(id)arg0 proxy:(id)arg1 ;


@end


#endif