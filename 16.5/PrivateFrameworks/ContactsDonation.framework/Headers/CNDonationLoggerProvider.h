// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDONATIONLOGGERPROVIDER_H
#define CNDONATIONLOGGERPROVIDER_H

@class NSString;
@protocol CNDonationLoggerProvider, CNDonationAccountLogger, CNDonationAgentLogger, CNDonationAnalyticsLogger, CNDonationManagedDuplicatesLogger, CNDonationExtensionLogger, CNDonationPreferencesLogger, CNDonationToolLogger;

#import <Foundation/Foundation.h>


@interface CNDonationLoggerProvider : NSObject <CNDonationLoggerProvider>



@property (readonly) NSObject<CNDonationAccountLogger> *accountLogger;
@property (readonly, nonatomic) NSObject<CNDonationAccountLogger> *accountLoggerImpl; // ivar: _accountLoggerImpl
@property (readonly) NSObject<CNDonationAgentLogger> *agentLogger;
@property (readonly, nonatomic) NSObject<CNDonationAgentLogger> *agentLoggerImpl; // ivar: _agentLoggerImpl
@property (readonly) NSObject<CNDonationAnalyticsLogger> *analyticsLogger;
@property (readonly, nonatomic) NSObject<CNDonationAnalyticsLogger> *analyticsLoggerImpl; // ivar: _analyticsLoggerImpl
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<CNDonationManagedDuplicatesLogger> *duplicatesLogger;
@property (readonly, nonatomic) NSObject<CNDonationManagedDuplicatesLogger> *duplicatesLoggerImpl; // ivar: _duplicatesLoggerImpl
@property (readonly) NSObject<CNDonationExtensionLogger> *extensionLogger;
@property (readonly, nonatomic) NSObject<CNDonationExtensionLogger> *extensionLoggerImpl; // ivar: _extensionLoggerImpl
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<CNDonationPreferencesLogger> *preferencesLogger;
@property (readonly, nonatomic) NSObject<CNDonationPreferencesLogger> *preferencesLoggerImpl; // ivar: _preferencesLoggerImpl
@property (readonly) Class superclass;
@property (readonly) NSObject<CNDonationToolLogger> *toolLogger;
@property (readonly, nonatomic) NSObject<CNDonationToolLogger> *toolLoggerImpl; // ivar: _toolLoggerImpl


+(id)defaultProvider;
-(id)init;


@end


#endif