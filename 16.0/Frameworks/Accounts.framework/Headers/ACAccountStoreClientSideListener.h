// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACACCOUNTSTORECLIENTSIDELISTENER_H
#define ACACCOUNTSTORECLIENTSIDELISTENER_H

@class NSString;
@protocol ACAccountStoreClientProtocol, ACRemoteAccountStoreSessionDelegate;

#import <Foundation/Foundation.h>


@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol>

 {
    id<ACRemoteAccountStoreSessionDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg0 ;
-(void)accountDidChange:(id)arg0 withChangeType:(int)arg1 ;
-(void)connectionWasInvalidated;


@end


#endif