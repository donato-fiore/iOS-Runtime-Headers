// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRAPPORTMESSAGINGCLIENTFACTORY_H
#define HMDRAPPORTMESSAGINGCLIENTFACTORY_H

@class NSString;
@protocol HMDRapportMessagingClientFactory;

#import <Foundation/Foundation.h>


@interface HMDRapportMessagingClientFactory : NSObject <HMDRapportMessagingClientFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)newCompanionLinkClient;
-(id)newRapportDeviceClientWrapperWithClient:(id)arg0 ;


@end


#endif