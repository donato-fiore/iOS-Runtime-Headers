// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTSENVIRONMENT_H
#define CNCONTACTSENVIRONMENT_H

@class NSURL, NSArray;
@protocol NSCopying, CNContactsLoggerProvider, CNSchedulerProvider, CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

#import <Foundation/Foundation.h>

#import "CNiOSAddressBook.h"
#import "CNiOSABPredicateRunner.h"

@interface CNContactsEnvironment : NSObject <NSCopying>

 {
    CNiOSAddressBook *_addressBook;
}


@property (retain, nonatomic) CNiOSABPredicateRunner *abPredicateRunner; // ivar: _abPredicateRunner
@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSArray *delegateInfos; // ivar: _delegateInfos
@property (readonly, nonatomic) NSObject<CNContactsLoggerProvider> *loggerProvider; // ivar: _loggerProvider
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (retain, nonatomic) NSObject<CNSiriIntelligenceSettingsProtocol> *siriIntelligenceSettings; // ivar: _siriIntelligenceSettings
@property (retain, nonatomic) NSObject<SGSuggestionsServiceContactsProtocol> *suggestionsService; // ivar: _suggestionsService
@property (readonly, nonatomic) BOOL useInMemoryStores;


+(BOOL)supportsSecureCoding;
+(id)baseURLWithDataLocationName:(id)arg0 ;
+(id)currentEnvironment;
+(id)inMemoryURL;
+(id)unitTestingEnvironment;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg0 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg0 schedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
+(id)unitTestingEnvironmentWithSchedulerProvider:(id)arg0 loggerProvider:(id)arg1 ;
-(id)copyWithDelegateInfos:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSchedulerProvider:(id)arg0 loggerProvider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)makeCurrentEnvironment;


@end


#endif