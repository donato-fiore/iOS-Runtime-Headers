// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IISMETRICSTORE_H
#define IISMETRICSTORE_H


#import <Foundation/Foundation.h>


@interface IISMetricStore : NSObject {
    ? storageLock;
    ? windowStartDate;
    ? configuration;
    ? enrichmentProviders;
    ? messageListeners;
    ? sendInterval;
}




+(id)sharedInstance;
-(BOOL)sendMessagesWithShouldContinue:(id)arg0 ;
-(BOOL)shouldSendMessages;
-(id)init;
-(id)saveMessage:(id)arg0 backend:(unsigned char)arg1 messageIdentifier:(id)arg2 ;
-(void)registerEnrichmentProvider:(id)arg0 ;
-(void)registerMessageListener:(id)arg0 ;
-(void)removeAllMetricsWithPrefix:(id)arg0 ;


@end


#endif