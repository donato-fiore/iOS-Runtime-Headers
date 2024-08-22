// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFASSERTIONHANDLER_H
#define PFASSERTIONHANDLER_H

@class NSAssertionHandler;
@protocol PFAssertionPolicyHandler;



@interface PFAssertionHandler : NSAssertionHandler

@property (retain) NSObject<PFAssertionPolicyHandler> *policy; // ivar: _policy


+(BOOL)runningUnderDebugger;
+(BOOL)runningUnitTests;
+(id)currentHandler;
+(void)install;
-(id)defaultPolicy;
-(id)defaultTestingPolicy;
-(id)init;
-(id)newAssertionInfoInMethod:(SEL)arg0 object:(id)arg1 function:(id)arg2 file:(id)arg3 lineNumber:(NSInteger)arg4 description:(id)arg5 arguments:(char *)arg6 ;
-(void)_install;
-(void)continueAfterAssertInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 description:(id)arg3 arguments:(char *)arg4 ;
-(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 description:(id)arg3 ;
-(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 description:(id)arg3 arguments:(char *)arg4 ;
-(void)handleFailureInMethod:(SEL)arg0 object:(id)arg1 file:(id)arg2 lineNumber:(NSInteger)arg3 description:(id)arg4 ;


@end


#endif