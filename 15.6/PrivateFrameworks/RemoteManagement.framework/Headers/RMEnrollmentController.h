// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMENROLLMENTCONTROLLER_H
#define RMENROLLMENTCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface RMEnrollmentController : NSObject {
    NSMutableDictionary *_connectionByServiceName;
}


@property (readonly, nonatomic) NSInteger channelType; // ivar: _channelType
@property (nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous


+(id)synchronousEnrollmentController;
+(id)synchronousEnrollmentControllerForManagementChannelType:(NSInteger)arg0 ;
+(id)userDefaultsEnrollmentURL;
-(id)_agentConnection;
-(id)_agentProxyWithErrorHandler:(id)arg0 ;
-(id)_channelTypeProxyWithErrorHandler:(id)arg0 ;
-(id)_daemonConnection;
-(id)_daemonProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithChannelType:(NSInteger)arg0 ;
-(void)_discoverEnrollmentURLForDomain:(id)arg0 port:(id)arg1 completionHandler:(id)arg2 ;
-(void)_enrollmentURLFromWellKnownURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceChannelEnrollmentExistsWithCompletionHandler:(id)arg0 ;
-(void)discoverEnrollmentURLForUserIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)enrollDeviceChannelWithURI:(id)arg0 completionHandler:(id)arg1 ;
-(void)enrollUserChannelWithAccountIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)managementChannelWithAccountIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)managementChannelWithEnrollmentURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)syncWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unenrollDeviceChannelWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unenrollUserChannelWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateWithIdentifier:(id)arg0 pushMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWithIdentifier:(id)arg0 tokensResponse:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif