// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUASSERTIONINFO_H
#define NUASSERTIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NUAssertionInfo : NSObject

@property (retain) NSString *currentlyExecutingJobName; // ivar: _currentlyExecutingJobName
@property (retain) NSString *fileName; // ivar: _fileName
@property (retain) NSString *functionName; // ivar: _functionName
@property BOOL isClassMethod; // ivar: _isClassMethod
@property BOOL isFatal; // ivar: _isFatal
@property NSUInteger lineNumber; // ivar: _lineNumber
@property (retain) NSString *message; // ivar: _message
@property (retain) Class objectClass; // ivar: _objectClass
@property SEL selector; // ivar: _selector


-(BOOL)isWarning;
-(id)description;
-(id)prettyMethodName;


@end


#endif