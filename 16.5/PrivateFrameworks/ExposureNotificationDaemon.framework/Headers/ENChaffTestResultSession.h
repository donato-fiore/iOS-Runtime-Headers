// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENCHAFFTESTRESULTSESSION_H
#define ENCHAFFTESTRESULTSESSION_H

@class NSURLSession, NSString, NSURL, ENRegion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENTestResultNetworkRequest.h"

@interface ENChaffTestResultSession : NSObject {
    id *_completion;
    ENTestResultNetworkRequest *_networkRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _state;
    NSURLSession *_URLSession;
}


@property (readonly, copy, nonatomic) NSString *agencyAPIKey; // ivar: _agencyAPIKey
@property (readonly, copy, nonatomic) NSURL *certificateURL; // ivar: _certificateURL
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (readonly, copy, nonatomic) NSURL *uploadURL; // ivar: _uploadURL
@property (readonly, copy, nonatomic) NSURL *verificationURL; // ivar: _verificationURL


+(id)sessionWithConfiguration:(id)arg0 URLSession:(id)arg1 queue:(id)arg2 error:(*id)arg3 ;
-(id)_initWithAgencyAPIKey:(id)arg0 certificateURL:(id)arg1 queue:(id)arg2 region:(id)arg3 uploadURL:(id)arg4 URLSession:(id)arg5 verifyURL:(id)arg6 ;
-(void)_callCompletionIfNecessaryWithError:(id)arg0 ;
-(void)_invalidate;
-(void)_sendCertificateChaffRequest;
-(void)_sendChaffRequestWithURL:(id)arg0 useAPIKey:(BOOL)arg1 successHandler:(id)arg2 ;
-(void)_sendUploadChaffRequest;
-(void)_sendVerificationChaffRequest;
-(void)dealloc;
-(void)invalidate;
-(void)sendChaffMessagesWithCompletion:(id)arg0 ;


@end


#endif