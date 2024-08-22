// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCATTESTATIONMANAGER_H
#define CRCATTESTATIONMANAGER_H

@class NSString, NSProgress;
@protocol NSURLSessionDelegate, NSProgressReporting;

#import <Foundation/Foundation.h>


@interface CRCAttestationManager : NSObject <NSURLSessionDelegate, NSProgressReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress; // ivar: progress
@property (readonly) Class superclass;


-(BOOL)challengeComponentsWith:(id)arg0 challengeResponse:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getStrongComponentsWithError:(*id)arg0 resultobtained:(*id)arg1 ;
-(BOOL)sendCertIssueRequestWith:(id)arg0 serverCertResponse:(*id)arg1 error:(*id)arg2 ;
-(BOOL)sendChallengeRequestWith:(id)arg0 serverResponse:(*id)arg1 error:(*id)arg2 ;
-(BOOL)transformChallengeResponseWithError:(*id)arg0 blockChallengeResponse:(id)arg1 resultobtained:(*id)arg2 ;
-(BOOL)transformServerCertResponseUsing:(id)arg0 serverCertResponseArray:(*id)arg1 error:(*id)arg2 ;
-(BOOL)transformStrongWithError:(*id)arg0 blockComponents:(id)arg1 resultobtained:(*id)arg2 ;
-(id)init;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)issueClientCertificateWithCompletionOnQueue:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;


@end


#endif