// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVVALIDATEPRINCIPALSTASKGROUP_H
#define COREDAVVALIDATEPRINCIPALSTASKGROUP_H

@class NSString, NSMutableSet, NSSet, NSURL;
@protocol CoreDAVTaskDelegate;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didReceiveAuthenticationError; // ivar: _authError
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *principalURLs; // ivar: _principalURLs
@property (readonly, nonatomic) NSSet *resultPrincipalURLs;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *urlBeingExamined; // ivar: _urlBeingExamined
@property (retain, nonatomic) NSMutableSet *urlsToExamine; // ivar: _urlsToExamine


-(id)initWithAccountInfoProvider:(id)arg0 urls:(id)arg1 taskManager:(id)arg2 ;
-(void)_fetchNextURL;
-(void)_finishWithError:(id)arg0 ;
-(void)cancelTaskGroup;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif