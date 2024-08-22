// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMAILANALYTICSCOLLECTOR_H
#define EDMAILANALYTICSCOLLECTOR_H

@class NSString;
@protocol EMCoreAnalyticsPeriodicDataProvider;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"
#import "EDSMIMEAnalyticsCollector.h"

@interface EDMailAnalyticsCollector : NSObject <EMCoreAnalyticsPeriodicDataProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EDSMIMEAnalyticsCollector *smimeAnalyticsCollector; // ivar: _smimeAnalyticsCollector
@property (readonly) Class superclass;


-(id)coreAnalyticsPeriodicEvent;
-(id)initWithAnalyticsCollector:(id)arg0 smimeConfigurationProvider:(id)arg1 messagePersistence:(id)arg2 ;


@end


#endif