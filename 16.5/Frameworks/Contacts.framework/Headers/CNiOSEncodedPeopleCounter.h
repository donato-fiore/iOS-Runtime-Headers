// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSENCODEDPEOPLECOUNTER_H
#define CNIOSENCODEDPEOPLECOUNTER_H

@class CNManagedConfiguration;
@protocol CNContactsLogger, CNiOSContactPredicate;

#import <Foundation/Foundation.h>

#import "CNiOSAddressBook.h"
#import "CNContactFetchRequest.h"
#import "CNContactsEnvironment.h"

@interface CNiOSEncodedPeopleCounter : NSObject {
    CNiOSAddressBook *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    id<CNContactsLogger> *_logger;
    CNManagedConfiguration *_managedConfiguration;
    id<CNiOSContactPredicate> *_privatePredicate;
}




-(BOOL)supportsCounting;
-(id)fetchContactCountWithError:(*id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 addressBook:(id)arg1 managedConfiguration:(id)arg2 ;


@end


#endif