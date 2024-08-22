// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDACCOUNT_H
#define IMDACCOUNT_H

@class NSDictionary, NSString;
@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "IMDService.h"
#import "IMDServiceSession.h"

@interface IMDAccount : NSObject <IMSystemMonitorListener>



@property (readonly, retain, nonatomic) NSDictionary *accountDefaults; // ivar: _accountDefaults
@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSInteger accountType;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL canMakeDowngradeRoutingChecks;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (copy, nonatomic) NSString *loginID; // ivar: _loginID
@property (nonatomic, getter=isManaged) BOOL managed; // ivar: _managed
@property (readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) int registrationStatus;
@property (retain, nonatomic) IMDService *service; // ivar: _service
@property (nonatomic) int serviceDisconnectReason; // ivar: _serviceDisconnectReason
@property (nonatomic) unsigned int serviceLoginStatus; // ivar: _serviceLoginStatus
@property (copy, nonatomic) NSString *serviceLoginStatusMessage; // ivar: _serviceLoginStatusMessage
@property (retain, nonatomic) IMDServiceSession *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldPublishNowPlaying; // ivar: _shouldPublishNowPlaying
@property (nonatomic) BOOL wasDisabledAutomatically;


-(id)_registrationInfo;
-(id)accountInfoToPost;
-(id)initWithAccountID:(id)arg0 defaults:(id)arg1 service:(id)arg2 ;
-(void)_forceSetLoginStatus:(unsigned int)arg0 message:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)createSessionIfNecessary;
-(void)dealloc;
-(void)postAccountCapabilities;
-(void)releaseSession;
-(void)setIsManaged:(BOOL)arg0 ;
-(void)setLoginStatus:(unsigned int)arg0 message:(id)arg1 ;
-(void)setLoginStatus:(unsigned int)arg0 message:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)writeAccountDefaults:(id)arg0 ;


@end


#endif