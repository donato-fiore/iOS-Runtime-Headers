// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQMLPROTOCOLPARSER_H
#define ICQMLPROTOCOLPARSER_H


#import <Foundation/Foundation.h>


@interface ICQMLProtocolParser : NSObject



+(BOOL)shouldCallMlDaemonForFetchOfferStub:(id)arg0 ;
+(BOOL)shouldCallMlDaemonForPushNotification:(id)arg0 ;
+(id)parseMaxDelaySecsFromFetchOffersResponse:(id)arg0 ;
+(id)parseMaxDelaySecsFromPushNotification:(id)arg0 ;


@end


#endif