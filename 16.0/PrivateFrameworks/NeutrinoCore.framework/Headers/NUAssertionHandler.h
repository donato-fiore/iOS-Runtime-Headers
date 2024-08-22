// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUASSERTIONHANDLER_H
#define NUASSERTIONHANDLER_H

@class NSAssertionHandler;
@protocol NUAssertionPolicyHandler;



@interface NUAssertionHandler : NSAssertionHandler

@property (retain) NSObject<NUAssertionPolicyHandler> *policy; // ivar: _policy


+(BOOL)runningUnitTests;
+(id)currentHandler;
-(id)defaultPolicy;
-(id)defaultTestingPolicy;
-(id)init;
-(id)newAssertionInfoInMethod:(SEL)arg0 object:(id)arg1 function:(id)arg2 file:(id)arg3 lineNumber:(NSUInteger)arg4 currentlyExecutingJobName:(id)arg5 description:(id)arg6 arguments:(char *)arg7 ;
-(void)continueAfterAssertInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSUInteger)arg2 currentlyExecutingJobName:(id)arg3 description:(id)arg4 arguments:(char *)arg5 ;
-(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 currentlyExecutingJobName:(id)arg3 description:(id)arg4 ;
-(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSUInteger)arg2 currentlyExecutingJobName:(id)arg3 description:(id)arg4 arguments:(char *)arg5 ;
-(void)handleFailureInMethod:(SEL)arg0 object:(id)arg1 file:(id)arg2 lineNumber:(NSInteger)arg3 currentlyExecutingJobName:(id)arg4 description:(id)arg5 ;


@end


#endif