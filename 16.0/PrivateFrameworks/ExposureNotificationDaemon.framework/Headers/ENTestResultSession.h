// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENTESTRESULTSESSION_H
#define ENTESTRESULTSESSION_H

@class NSURLSession, NSMutableArray, NSUUID, NSArray, NSString, NSURL, ENRegion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENTestResultNetworkRequest.h"
#import "ENTestResultPersistentSession.h"

@interface ENTestResultSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _state;
    ENTestResultNetworkRequest *_networkRequest;
    ENTestResultPersistentSession *_persistentSession;
    NSURLSession *_URLSession;
    NSMutableArray *_verificationCompletions;
}


@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSArray *acceptedReportTypes; // ivar: _acceptedReportTypes
@property (readonly, copy, nonatomic) NSString *agencyAPIKey; // ivar: _agencyAPIKey
@property (readonly, copy, nonatomic) NSURL *certificateURL; // ivar: _certificateURL
@property (readonly, copy, nonatomic) NSString *healthAuthorityID; // ivar: _healthAuthorityID
@property (nonatomic) NSUInteger maxRetryTime; // ivar: _maxRetryTime
@property (readonly, copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (readonly, copy, nonatomic) NSURL *uploadURL; // ivar: _uploadURL
@property (readonly, copy, nonatomic) NSString *verificationCode; // ivar: _verificationCode
@property (readonly, copy, nonatomic) NSURL *verificationURL; // ivar: _verificationURL


+(id)sessionWithVerificationCode:(id)arg0 configuration:(id)arg1 maxRetryTime:(NSUInteger)arg2 nonce:(id)arg3 URLSession:(id)arg4 queue:(id)arg5 error:(*id)arg6 ;
-(BOOL)_checkInvalidatedAndReturnError:(*id)arg0 ;
-(BOOL)_performVerificationRequestWithError:(*id)arg0 ;
-(id)_initWithAgencyAPIKey:(id)arg0 certificateURL:(id)arg1 acceptedReportTypes:(id)arg2 healthAuthorityID:(id)arg3 maxRetryTime:(NSUInteger)arg4 nonce:(id)arg5 queue:(id)arg6 region:(id)arg7 uploadURL:(id)arg8 URLSession:(id)arg9 verificationCode:(id)arg10 verifyURL:(id)arg11 ;
-(id)getMetadataAndReturnError:(*id)arg0 ;
-(id)getUploadingTemporaryExposureKeys;
-(void)_flushVerificationCompletionsWithError:(id)arg0 ;
-(void)_performCertificateRequestWithToken:(id)arg0 temporaryExposureKeys:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performUploadRequestWithTemporaryExposureKeys:(id)arg0 revisionToken:(id)arg1 certificate:(id)arg2 HMACKey:(id)arg3 userMetadata:(id)arg4 completionHandler:(id)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(void)uploadTemporaryExposureKeys:(id)arg0 revisionToken:(id)arg1 userMetadata:(id)arg2 completionHandler:(id)arg3 ;
-(void)verifyCodeWithCompletionHandler:(id)arg0 ;


@end


#endif