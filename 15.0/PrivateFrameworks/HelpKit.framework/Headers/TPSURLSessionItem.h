// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSURLSESSIONITEM_H
#define TPSURLSESSIONITEM_H

@class NSString;
@protocol TPSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "TPSURLSessionTask.h"

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) id *completionHanlder; // ivar: _completionHanlder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TPSURLSessionTask *sessionTask; // ivar: _sessionTask
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(id)initWithSessionTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)URLSessionSessionTask:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)notifyWithSessionTask:(id)arg0 error:(id)arg1 ;
-(void)resume;


@end


#endif