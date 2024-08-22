// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHTRANSCODESERVERPUBLICKEYOPERATION_H
#define CKDFETCHTRANSCODESERVERPUBLICKEYOPERATION_H

@class NSString, CKPublicKey, NSURL;


#import "CKDOperation.h"

@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation

@property (nonatomic) NSUInteger state;
@property (readonly, nonatomic) NSString *transcodeServerHostname; // ivar: _transcodeServerHostname
@property (retain) CKPublicKey *transcodeServerPublicKey; // ivar: _transcodeServerPublicKey
@property (retain, nonatomic) NSURL *transcodeServerPublicKeyURL; // ivar: _transcodeServerPublicKeyURL
@property (nonatomic) NSInteger type; // ivar: _type


+(struct __SecPolicy *)createTranscodeServerTrustPolicy;
-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)determineTranscodeServerPublicKeyURL;
-(void)fetchCachedTranscodePublicKey;
-(void)fetchRemoteTranscodePublicKey;
-(void)main;


@end


#endif