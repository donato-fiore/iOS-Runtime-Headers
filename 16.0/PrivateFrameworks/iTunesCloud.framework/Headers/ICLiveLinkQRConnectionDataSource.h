// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLIVELINKQRCONNECTIONDATASOURCE_H
#define ICLIVELINKQRCONNECTIONDATASOURCE_H

@class IDSAccount, NSString, NSUUID, NSDictionary, IDSPseudonym, MSVTimer, IDSService, NSURL;
@protocol MSVQRConnectionSessionDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICSharedListeningConnectionReport.h"

@interface ICLiveLinkQRConnectionDataSource : NSObject <MSVQRConnectionSessionDataSource>



@property (retain, nonatomic) IDSAccount *account; // ivar: _account
@property (readonly, nonatomic) NSString *applicationProtocol;
@property (copy, nonatomic) id *dataSourceErrorHandler; // ivar: _dataSourceErrorHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (retain, nonatomic) NSUUID *groupSessionIdentifier; // ivar: _groupSessionIdentifier
@property (retain, nonatomic) NSDictionary *groupSessionOptions; // ivar: _groupSessionOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (retain, nonatomic) IDSPseudonym *pseudonym; // ivar: _pseudonym
@property (retain, nonatomic) MSVTimer *pseudonymRenewalTimer; // ivar: _pseudonymRenewalTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) ICSharedListeningConnectionReport *report; // ivar: _report
@property (readonly, nonatomic) NSString *rpcPath;
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (copy, nonatomic) NSString *sharedListeningSessionIdentifier; // ivar: _sharedListeningSessionIdentifier
@property (retain, nonatomic) NSURL *sharedListeningSessionInviteURL; // ivar: _sharedListeningSessionInviteURL
@property (retain, nonatomic) NSString *sharedSessionToken; // ivar: _sharedSessionToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *trustHandler;


+(id)dataSourceForExistingSharedListeningSession:(id)arg0 identity:(id)arg1 ;
+(id)dataSourceForNewSharedListeningSessionWithIdentity:(id)arg0 ;
-(id)initWithSharedListeningSessionIdentifier:(id)arg0 identity:(id)arg1 ;
-(id)sessionURLForBag:(id)arg0 error:(*id)arg1 ;
-(void)_beginPseudonymAutoRenewal;
-(void)_joinSharedListeningSessionWithCompletion:(id)arg0 ;
-(void)_provisionUserPseudonymWithCompletion:(id)arg0 ;
-(void)_renewUserPseudonym;
-(void)_revokeUserPseudonymWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)populateWithCompletion:(id)arg0 ;


@end


#endif