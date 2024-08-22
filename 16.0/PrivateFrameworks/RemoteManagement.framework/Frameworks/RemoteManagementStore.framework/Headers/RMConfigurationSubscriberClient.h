// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMCONFIGURATIONSUBSCRIBERCLIENT_H
#define RMCONFIGURATIONSUBSCRIBERCLIENT_H


#import <Foundation/Foundation.h>

#import "RMStatusPublisherDelegate.h"
#import "RMConfigurationSubscriberDelegate.h"

@interface RMConfigurationSubscriberClient : NSObject

@property (retain, nonatomic) RMStatusPublisherDelegate *publisherDelegate; // ivar: _publisherDelegate
@property (retain, nonatomic) RMConfigurationSubscriberDelegate *subscriberDelegate; // ivar: _subscriberDelegate


-(void)_buildSubscribedReferences:(id)arg0 declarations:(id)arg1 store:(id)arg2 ;
-(void)fetchConfigurationsWithTypes:(id)arg0 scope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)sendStatusKeys:(id)arg0 storeIdentifier:(id)arg1 scope:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif