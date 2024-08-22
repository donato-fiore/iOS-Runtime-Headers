// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMCONFIGURATIONSUBSCRIBEREVENTDESCRIPTION_H
#define RMCONFIGURATIONSUBSCRIBEREVENTDESCRIPTION_H


#import <Foundation/Foundation.h>

#import "RMStoreConfigurationSubscriberDescription.h"

@interface RMConfigurationSubscriberEventDescription : NSObject

@property (readonly, nonatomic) RMStoreConfigurationSubscriberDescription *configurationSubscriberDescription; // ivar: _configurationSubscriberDescription


+(id)eventDescriptionWithEventsDictionary:(id)arg0 ;
+(id)eventDescriptionWithExtensionDictionary:(id)arg0 ;
-(id)initWithConfigurationSubscriberDescription:(id)arg0 ;


@end


#endif