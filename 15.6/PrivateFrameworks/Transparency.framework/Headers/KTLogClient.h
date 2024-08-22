// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTLOGCLIENT_H
#define KTLOGCLIENT_H

@class NSURL;


#import "TransparencyLogClient.h"

@interface KTLogClient : TransparencyLogClient

@property BOOL configured; // ivar: _configured
@property (retain) NSURL *consistencyProofURI; // ivar: _consistencyProofURI
@property CGFloat expirationTime; // ivar: _expirationTime
@property (retain) NSURL *publicKeysURI; // ivar: _publicKeysURI
@property (retain) NSURL *queryURI; // ivar: _queryURI
@property (retain) NSURL *revisionLogProofURI; // ivar: _revisionLogProofURI


+(id)configBagFileName;
+(id)configBagRequest;
+(id)configBagURL;
+(id)formatEventName:(id)arg0 application:(id)arg1 state:(id)arg2 ;
+(id)formatEventName:(id)arg0 state:(id)arg1 ;
-(BOOL)configurationExpired;
-(BOOL)configureFromNetworkBag:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureWithDisk:(*id)arg0 ;
-(BOOL)processConfigBagData:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateConfigBagCertificates:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateConfigBagEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateConfigBagSignature:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateConfigEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeConfigToDisk:(id)arg0 error:(*id)arg1 ;
-(id)copyConfigurationBag:(*id)arg0 ;
-(id)readConfigFromDisk:(*id)arg0 ;
-(void)clearState:(*id)arg0 ;
-(void)configure:(id)arg0 ;
-(void)downloadConsistencyProof:(id)arg0 uuid:(id)arg1 retry:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)downloadMessage:(id)arg0 uri:(id)arg1 uuid:(id)arg2 application:(id)arg3 retry:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)downloadPublicKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadQuery:(id)arg0 uuid:(id)arg1 retry:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)downloadRevisionLogInclusionProof:(id)arg0 uuid:(id)arg1 retry:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)fetchConsistencyProof:(id)arg0 uuid:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchMessage:(id)arg0 uri:(id)arg1 uuid:(id)arg2 application:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchPublicKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchQuery:(id)arg0 uuid:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchRevisionLogInclusionProof:(id)arg0 uuid:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif