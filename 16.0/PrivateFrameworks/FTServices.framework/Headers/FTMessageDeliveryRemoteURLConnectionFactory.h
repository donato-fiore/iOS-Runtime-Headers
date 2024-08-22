// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMESSAGEDELIVERYREMOTEURLCONNECTIONFACTORY_H
#define FTMESSAGEDELIVERYREMOTEURLCONNECTIONFACTORY_H

@class NSString;
@protocol FTMessageDeliveryRemoteURLConnectionFactory;

#import <Foundation/Foundation.h>


@interface FTMessageDeliveryRemoteURLConnectionFactory : NSObject <FTMessageDeliveryRemoteURLConnectionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)remoteURLConnection;


@end


#endif