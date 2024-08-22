// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FDWALLETMESSAGINGPROVIDER_H
#define FDWALLETMESSAGINGPROVIDER_H

@class NSString;
@protocol PDApplicationMessageProvider;

#import <Foundation/Foundation.h>

#import "_TtC13FinanceDaemon23WalletMessagingProvider.h"

@interface FDWalletMessagingProvider : NSObject <PDApplicationMessageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _TtC13FinanceDaemon23WalletMessagingProvider *wrappedProvider; // ivar: _wrappedProvider


-(id)applicationMessageSink:(id)arg0 createContentForMessageWithRegistration:(id)arg1 ;
-(id)init;
-(void)applicationMessageSink:(id)arg0 removedMessageWithRegistration:(id)arg1 ;
-(void)applicationMessageSink:(id)arg0 tappedMessageWithRegistration:(id)arg1 ;
-(void)connectApplicationMessageSink:(id)arg0 ;
-(void)processMessagesWithCompletionHandler:(id)arg0 ;


@end


#endif