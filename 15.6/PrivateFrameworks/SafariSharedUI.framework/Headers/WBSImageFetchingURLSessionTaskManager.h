// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSIMAGEFETCHINGURLSESSIONTASKMANAGER_H
#define WBSIMAGEFETCHINGURLSESSIONTASKMANAGER_H

@class NSString;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface WBSImageFetchingURLSessionTaskManager : NSObject <NSURLSessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif