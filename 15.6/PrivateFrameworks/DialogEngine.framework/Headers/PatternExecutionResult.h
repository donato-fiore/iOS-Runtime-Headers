// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PATTERNEXECUTIONRESULT_H
#define PATTERNEXECUTIONRESULT_H

@class NSArray, NSDictionary, NSString, NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface PatternExecutionResult : NSObject

@property (retain, nonatomic) NSArray *dialog; // ivar: _dialog
@property (retain, nonatomic) NSDictionary *meta; // ivar: _meta
@property (retain, nonatomic) NSString *patternId; // ivar: _patternId
@property (nonatomic) NSUInteger patternType; // ivar: _patternType
@property (retain, nonatomic) NSNumber *printSupportingDialog; // ivar: _printSupportingDialog
@property (retain, nonatomic) NSString *responseMode; // ivar: _responseMode
@property (retain, nonatomic) NSData *visual; // ivar: _visual




@end


#endif