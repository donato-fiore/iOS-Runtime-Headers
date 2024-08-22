// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMCONFIGURATIONSUBSCRIBEREXTENSIONREQUESTHANDLER_H
#define RMCONFIGURATIONSUBSCRIBEREXTENSIONREQUESTHANDLER_H

@class NSString;
@protocol NSExtensionRequestHandling, RMConfigurationSubscriberExtensionRequestHandling;

#import <Foundation/Foundation.h>

#import "RMConfigurationSubscriberExtension.h"

@interface RMConfigurationSubscriberExtensionRequestHandler : NSObject <NSExtensionRequestHandling, RMConfigurationSubscriberExtensionRequestHandling>



@property (readonly, nonatomic) RMConfigurationSubscriberExtension *configurationSubscriber; // ivar: _configurationSubscriber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfigurationSubscriber:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(id)arg0 ;


@end


#endif