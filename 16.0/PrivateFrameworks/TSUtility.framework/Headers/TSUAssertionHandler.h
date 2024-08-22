// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUASSERTIONHANDLER_H
#define TSUASSERTIONHANDLER_H

@class NSAssertionHandler;



@interface TSUAssertionHandler : NSAssertionHandler



+(id)currentHandler;
+(id)performBlockIgnoringAssertions:(id)arg0 ;
+(void)installAsNSHandler;
+(void)testCaseStarted:(id)arg0 ;
+(void)testCaseStopped:(id)arg0 ;
-(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 description:(id)arg3 ;
-(void)handleFailureInMethod:(SEL)arg0 object:(id)arg1 file:(id)arg2 lineNumber:(NSInteger)arg3 description:(id)arg4 ;
-(void)handleFailureWithLocation:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 description:(id)arg3 arguments:(char *)arg4 ;


@end


#endif