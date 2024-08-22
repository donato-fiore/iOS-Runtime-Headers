// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSMIMEANALYTICSCOLLECTOR_H
#define EDSMIMEANALYTICSCOLLECTOR_H

@class NSString;
@protocol EMCoreAnalyticsPeriodicDataProvider, EDSMIMEConfigurationProvider;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"

@interface EDSMIMEAnalyticsCollector : NSObject <EMCoreAnalyticsPeriodicDataProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) NSObject<EDSMIMEConfigurationProvider> *smimeConfigurationProvider; // ivar: _smimeConfigurationProvider
@property (readonly) Class superclass;


-(id)coreAnalyticsPeriodicEvent;
-(id)initWithAnalyticsCollector:(id)arg0 smimeConfigurationProvider:(id)arg1 messagePersistence:(id)arg2 ;


@end


#endif