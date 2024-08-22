// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IETESTRESULT_H
#define IETESTRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IETestResult : NSObject

@property (retain, nonatomic) NSString *flowId; // ivar: _flowId
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger status; // ivar: _status
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (retain, nonatomic) NSString *testName; // ivar: _testName


-(BOOL)isEqual:(id)arg0 ;


@end


#endif