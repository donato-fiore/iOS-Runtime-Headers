// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICREQUESTOPERATION_H
#define ICREQUESTOPERATION_H

@class NSString, NSProgress;
@protocol NSProgressReporting;


#import "ICAsyncOperation.h"

@interface ICRequestOperation : ICAsyncOperation <NSProgressReporting>

 {
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(id)init;
-(void)finishWithError:(id)arg0 ;
-(void)performRequestOnOperationQueue:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performRequestWithCompletionHandler:(id)arg0 ;


@end


#endif