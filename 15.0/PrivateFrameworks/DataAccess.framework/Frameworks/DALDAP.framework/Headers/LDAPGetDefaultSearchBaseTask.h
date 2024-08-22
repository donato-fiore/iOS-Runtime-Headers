// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LDAPGETDEFAULTSEARCHBASETASK_H
#define LDAPGETDEFAULTSEARCHBASETASK_H

@class NSString;


#import "LDAPTask.h"

@interface LDAPGetDefaultSearchBaseTask : LDAPTask

@property (retain, nonatomic) NSString *defaultNamingContext; // ivar: _defaultNamingContext


-(id)daLevelErrorForLDAPError:(int)arg0 ;
-(int)numDownloadedElements;
-(void)_performQuery;
-(void)finishWithError:(id)arg0 ;
-(void)performTask;


@end


#endif