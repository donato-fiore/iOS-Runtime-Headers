// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE16FBKFIXTURELOADER_H
#define _TTC12FEEDBACKCORE16FBKFIXTURELOADER_H

@protocol FBKForegroundDataClient, FBKLoginManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12FeedbackCore16FBKFixtureLoader : NSObject <FBKForegroundDataClient, FBKLoginManagerDelegate>

 {
    ? bundle;
    ? testFixtureDir;
    ? Log;
    ? logger;
}




-(id)init;
-(id)initForBundle:(id)arg0 ;
// -(void)dataForURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURL:(id)arg0 successWithResponse:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURLRequest:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURLRequest:(id)arg0 successWithResponse:(id)arg1 error:(unk)arg2  ;
// -(void)deleteAtURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)deleteResourceAtURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
-(void)didLogInWithLoginUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)didLogOutWithCompletion:(id)arg0 ;
// -(void)jsonForURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)jsonForURLRequest:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)postToURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)putToURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;


@end


#endif