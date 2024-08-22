// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTCONNECTIONTESTRESULT_H
#define ASTCONNECTIONTESTRESULT_H

@class NSString, NSNumber;
@protocol ASTTestResultHandling;


#import "ASTMaterializedConnection.h"

@interface ASTConnectionTestResult : ASTMaterializedConnection <ASTTestResultHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *testId; // ivar: _testId


-(id)endpoint;
-(id)initWithTestResults:(id)arg0 ;


@end


#endif