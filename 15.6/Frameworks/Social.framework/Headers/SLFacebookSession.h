// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLFACEBOOKSESSION_H
#define SLFACEBOOKSESSION_H


#import <Foundation/Foundation.h>


@interface SLFacebookSession : NSObject



+(id)_remoteInterface;
+(id)sharedSession;
-(BOOL)uploadPost:(id)arg0 ;
-(BOOL)uploadPost:(id)arg0 forPID:(int)arg1 ;
-(BOOL)uploadProfilePicture:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)tokenSecretForEntitledClientWithError:(*id)arg0 ;
-(void)cancelUploadWithIdentifier:(id)arg0 ;
-(void)fetchLikeStatusForURL:(id)arg0 flags:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)injectCompletedUploadWithCompletion:(id)arg0 ;
-(void)likeURL:(id)arg0 completion:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg0 ;
-(void)revokeAllAccessTokensForDevice;
-(void)testCall;
-(void)unlikeURL:(id)arg0 completion:(id)arg1 ;
-(void)uploadPost:(id)arg0 suppressAlerts:(BOOL)arg1 withPostCompletion:(id)arg2 ;
-(void)uploadsInProgress:(id)arg0 ;


@end


#endif