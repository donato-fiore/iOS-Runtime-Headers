// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LDAPSEARCHTASK_H
#define LDAPSEARCHTASK_H

@class NSMutableArray, DAContactsSearchQuery;
@protocol OS_ldap_operation;


#import "LDAPTask.h"

@interface LDAPSearchTask : LDAPTask

@property (retain, nonatomic) NSMutableArray *foundContacts; // ivar: _foundContacts
@property (retain, nonatomic) NSObject<OS_ldap_operation> *operation; // ivar: _operation
@property (readonly, nonatomic) DAContactsSearchQuery *query; // ivar: _query


-(id)_copySearchStringForQueryInput:(id)arg0 ;
-(id)_searchStringForWord:(id)arg0 ;
-(id)daLevelErrorForLDAPError:(int)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(int)numDownloadedElements;
-(void)_appendKey:(id)arg0 value:(id)arg1 toSearchResultElement:(id)arg2 ;
-(void)_failImmediately;
-(void)_performQuery;
-(void)_promptForPasswordDueToError:(id)arg0 ;
-(void)disable;
-(void)finishWithError:(id)arg0 ;
-(void)performTask;


@end


#endif