// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSAVEREQUESTVERIFIER_H
#define CNSAVEREQUESTVERIFIER_H


#import <Foundation/Foundation.h>


@interface CNSaveRequestVerifier : NSObject



+(BOOL)_areDirectPropertiesOfSaveRequest:(id)arg0 authorizedForSavingWithContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)_arePropertiesOfContacts:(id)arg0 inSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(*id)arg3 ;
+(BOOL)_isEditingOfContacts:(id)arg0 inSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(*id)arg3 ;
+(BOOL)isSaveRequest:(id)arg0 authorizedForSavingWithContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)isValidSaveRequest:(id)arg0 error:(*id)arg1 ;
+(id)insertedAndUpdatedContactsForSaveRequest:(id)arg0 ;
+(id)os_log;


@end


#endif