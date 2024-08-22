// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMCONFIGURATIONSUBSCRIBEREXTENSION_H
#define RMCONFIGURATIONSUBSCRIBEREXTENSION_H

@class NSConditionLock, NSSet, NSString;
@protocol RMConfigurationSubscriberExtensionRequestHandling, RMConfigurationApplicator;

#import <Foundation/Foundation.h>

#import "RMConfigurationSubscriberClient.h"

@interface RMConfigurationSubscriberExtension : NSObject <RMConfigurationSubscriberExtensionRequestHandling>

 {
    NSConditionLock *_configurationSubscriberClientLock;
}


@property (readonly, nonatomic) NSObject<RMConfigurationApplicator> *applicator; // ivar: _applicator
@property (retain, nonatomic) RMConfigurationSubscriberClient *configurationSubscriberClient; // ivar: _configurationSubscriberClient
@property (readonly, nonatomic) NSSet *configurationTypes; // ivar: _configurationTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedSubscriber;
-(id)init;
-(id)initWithConfigurationSubscriberClient:(id)arg0 applicator:(id)arg1 configurationTypes:(id)arg2 ;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(id)arg0 ;


@end


#endif