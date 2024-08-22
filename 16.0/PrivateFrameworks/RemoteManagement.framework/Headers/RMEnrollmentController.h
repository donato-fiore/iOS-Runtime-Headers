// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMENROLLMENTCONTROLLER_H
#define RMENROLLMENTCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface RMEnrollmentController : NSObject {
    NSMutableDictionary *_connectionByServiceName;
}


@property (readonly, nonatomic) NSInteger enrollmentType; // ivar: _enrollmentType
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope
@property (nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous


+(id)synchronousEnrollmentControllerForManagementEnrollmentType:(NSInteger)arg0 scope:(NSInteger)arg1 ;
+(id)userDefaultsEnrollmentURL;
-(id)_agentConnection;
-(id)_agentProxyWithErrorHandler:(id)arg0 ;
-(id)_daemonConnection;
-(id)_daemonProxyWithErrorHandler:(id)arg0 ;
-(id)_scopedProxyWithErrorHandler:(id)arg0 ;
-(id)initWithEnrollmentType:(NSInteger)arg0 scope:(NSInteger)arg1 ;
-(void)_discoverEnrollmentURLForDomain:(id)arg0 port:(id)arg1 completionHandler:(id)arg2 ;
-(void)_enrollmentURLFromWellKnownURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_unenrollIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceChannelEnrollmentExistsWithCompletionHandler:(id)arg0 ;
-(void)discoverEnrollmentURLForUserIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)enrollDeviceChannelWithURI:(id)arg0 completionHandler:(id)arg1 ;
-(void)enrollUserChannelWithAccountIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)enrollViaMDMWithEnrollmentType:(NSInteger)arg0 uri:(id)arg1 accountIdentifier:(id)arg2 personaIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)managementChannelWithAccountIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)managementChannelWithEnrollmentURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)syncWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unenrollDeviceChannelWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unenrollUserChannelWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unenrollViaMDMWithEnrollmentType:(NSInteger)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWithIdentifier:(id)arg0 pushMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWithIdentifier:(id)arg0 tokensResponse:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif