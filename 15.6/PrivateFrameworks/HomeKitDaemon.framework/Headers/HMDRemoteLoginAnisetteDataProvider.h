// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTELOGINANISETTEDATAPROVIDER_H
#define HMDREMOTELOGINANISETTEDATAPROVIDER_H

@class HMFObject, NSString;
@protocol AKAnisetteServiceProtocol, HMFLogging;


#import "HMDRemoteLoginMessageSender.h"

@interface HMDRemoteLoginAnisetteDataProvider : HMFObject <AKAnisetteServiceProtocol, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // ivar: _remoteMessageSender
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSessionID:(id)arg0 remoteMessageSender:(id)arg1 ;
-(id)logIdentifier;
-(void)eraseAnisetteWithCompletion:(id)arg0 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisionAnisetteWithCompletion:(id)arg0 ;
-(void)syncAnisetteWithSIMData:(id)arg0 completion:(id)arg1 ;


@end


#endif