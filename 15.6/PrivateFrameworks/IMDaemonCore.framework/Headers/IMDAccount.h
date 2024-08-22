// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDACCOUNT_H
#define IMDACCOUNT_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "IMDService.h"
#import "IMDServiceSession.h"

@interface IMDAccount : NSObject <IMSystemMonitorListener>

 {
    NSInteger _accountType;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
}


@property (readonly, retain, nonatomic) NSDictionary *accountDefaults; // ivar: _accountDefaults
@property (readonly, retain, nonatomic) NSString *accountID; // ivar: _account
@property (readonly, retain, nonatomic) NSDictionary *accountInfoToPost;
@property (readonly, nonatomic) NSInteger accountType;
@property (readonly, nonatomic) BOOL canMakeDowngradeRoutingChecks;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (nonatomic) BOOL isManaged; // ivar: _isManaged
@property (readonly, retain, nonatomic) NSString *loginID; // ivar: _loginID
@property (readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, retain, nonatomic) IMDService *service; // ivar: _service
@property (readonly, nonatomic) int serviceDisconnectReason; // ivar: _disconnectReason
@property (readonly, nonatomic) unsigned int serviceLoginStatus; // ivar: _loginStatus
@property (readonly, retain, nonatomic) NSString *serviceLoginStatusMessage; // ivar: _loginStatusMessage
@property (retain, nonatomic) IMDServiceSession *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldPublishNowPlaying;
@property (readonly, retain, nonatomic) NSDictionary *status;
@property (readonly, retain, nonatomic) NSDictionary *statusToPost;
@property (readonly, retain, nonatomic) NSDictionary *statusToSave;
@property (nonatomic) BOOL wasDisabledAutomatically;


-(id)_registrationInfo;
-(id)initWithAccountID:(id)arg0 defaults:(id)arg1 service:(id)arg2 ;
-(void)_forceSetLoginStatus:(unsigned int)arg0 message:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)_updateIdle;
-(void)changeStatus:(id)arg0 ;
-(void)createSessionIfNecessary;
-(void)dealloc;
-(void)postAccountCapabilities;
-(void)postAccountCapabilitiesToListener:(id)arg0 ;
-(void)releaseSession;
-(void)setLoginStatus:(unsigned int)arg0 message:(id)arg1 ;
-(void)setLoginStatus:(unsigned int)arg0 message:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)systemDidBecomeIdle;
-(void)systemDidBecomeUnidle;
-(void)tunesController:(id)arg0 playerInfoChanged:(id)arg1 ;
-(void)writeAccountDefaults:(id)arg0 ;


@end


#endif