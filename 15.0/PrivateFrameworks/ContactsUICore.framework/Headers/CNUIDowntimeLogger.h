// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIDOWNTIMELOGGER_H
#define CNUIDOWNTIMELOGGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CNUIDowntimeLogger : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(id)sharedLogger;
-(id)init;
-(id)initWithLog:(id)arg0 ;
-(void)logFailure:(id)arg0 fetchingContactsOfFamilyMember:(id)arg1 ;
-(void)logFailure:(id)arg0 updatingContactListByAddingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg0 updatingContactListByRemovingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg0 updatingContactWhitelistByAddingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg0 updatingContactWhitelistByRemovingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFetchingFamilyCircleError:(id)arg0 ;
-(void)logFetchingMeError:(id)arg0 ;
-(void)logResultOfFetchingContacts:(id)arg0 ofFamilyMember:(id)arg1 ;
-(void)logSuccessFetchingContacts:(id)arg0 ofFamilyMember:(id)arg1 ;
-(void)logSuccessUpdatingContactListByAddingContacts:(id)arg0 ofFamilyMember:(id)arg1 ;
-(void)logSuccessUpdatingContactListByRemovingContacts:(id)arg0 ofFamilyMember:(id)arg1 ;
-(void)logSuccessUpdatingContactWhitelistByAddingContacts:(id)arg0 ofFamilyMember:(id)arg1 ;
-(void)logSuccessUpdatingContactWhitelistByRemovingContacts:(id)arg0 ofFamilyMember:(id)arg1 ;


@end


#endif