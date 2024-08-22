// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERTESTCLUSTER_H
#define MTRCLUSTERTESTCLUSTER_H



#import "MTRClusterUnitTesting.h"

@interface MTRClusterTestCluster : MTRClusterUnitTesting



-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(void)simpleStructEchoRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testAddArgumentsWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testComplexNullableOptionalRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testEmitTestEventRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testEmitTestFabricScopedEventRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testEnumsRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testListInt8UArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testListInt8UReverseRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testListNestedStructListArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testListStructArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testNestedStructArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testNestedStructListArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testNotHandledWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)testNotHandledWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testNullableOptionalRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testSimpleArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testSimpleOptionalArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testSpecificWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)testSpecificWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testStructArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testStructArrayArgumentRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testUnknownCommandWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)testUnknownCommandWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)testWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)testWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)timedInvokeRequestWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)timedInvokeRequestWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif