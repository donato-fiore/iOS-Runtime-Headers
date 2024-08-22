// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWURLSCHEMETASK_H
#define SWURLSCHEMETASK_H

@class NSString, NSURLRequest;
@protocol WKURLSchemeTask, SWLogger;

#import <Foundation/Foundation.h>


@interface SWURLSchemeTask : NSObject <WKURLSchemeTask>



@property (copy, nonatomic, setter=onCompletion:) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<WKURLSchemeTask> *task; // ivar: _task


-(id)initWithTask:(id)arg0 logger:(id)arg1 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didFinish;
-(void)didReceiveData:(id)arg0 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)onCompletion:(id)arg0 ;
-(void)performBlockOnMainThread:(id)arg0 ;


@end


#endif