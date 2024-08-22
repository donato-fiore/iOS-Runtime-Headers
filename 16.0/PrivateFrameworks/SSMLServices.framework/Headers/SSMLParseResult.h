// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMLPARSERESULT_H
#define SSMLPARSERESULT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "SSMLParseError.h"

@interface SSMLParseResult : NSObject

@property (retain, nonatomic) SSMLParseError *error; // ivar: _error
@property (retain, nonatomic) NSString *plainTalkResult; // ivar: _plainTalkResult
@property (retain, nonatomic) NSString *plainTextResult; // ivar: _plainTextResult
@property (retain, nonatomic) NSString *ssmlResult; // ivar: _ssmlResult
@property (retain, nonatomic) NSArray *utteranceResult; // ivar: _utteranceResult




@end


#endif