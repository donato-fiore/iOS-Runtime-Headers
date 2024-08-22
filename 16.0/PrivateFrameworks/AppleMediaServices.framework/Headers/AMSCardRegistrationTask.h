// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCARDREGISTRATIONTASK_H
#define AMSCARDREGISTRATIONTASK_H

@class NSString;


#import "AMSTask.h"

@interface AMSCardRegistrationTask : AMSTask

@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier


-(id)_performCardRegistration;
-(id)initWithCountryCode:(id)arg0 merchantIdentifier:(id)arg1 ;
-(id)performCardRegistration;


@end


#endif