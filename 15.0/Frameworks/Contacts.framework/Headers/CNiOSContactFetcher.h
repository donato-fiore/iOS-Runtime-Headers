// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSCONTACTFETCHER_H
#define CNIOSCONTACTFETCHER_H

@class CNManagedConfiguration;

#import <Foundation/Foundation.h>

#import "CNContactFetchRequest.h"
#import "CNContactsEnvironment.h"

@interface CNiOSContactFetcher : NSObject {
    *void _addressBook;
    CNContactFetchRequest *_fetchRequest;
    id *_personToContact;
    CNContactsEnvironment *_environment;
    CNManagedConfiguration *_managedConfiguration;
}




+(id)contactsForFetchRequest:(id)arg0 matchInfos:(*id)arg1 inAddressBook:(*void)arg2 environment:(id)arg3 managedConfiguration:(id)arg4 error:(*id)arg5 ;
// -(id)executeFetchRequestWithProgressiveResults:(id)arg0 completion:(unk)arg1  ;
-(id)fetchContactsReturningMatchInfos:(*id)arg0 error:(*id)arg1 ;
-(id)initWithFetchRequest:(id)arg0 addressBook:(*void)arg1 environment:(id)arg2 managedConfiguration:(id)arg3 ;
-(void)dealloc;


@end


#endif