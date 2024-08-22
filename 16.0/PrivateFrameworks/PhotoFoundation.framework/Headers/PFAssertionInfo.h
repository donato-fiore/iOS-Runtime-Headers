// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFASSERTIONINFO_H
#define PFASSERTIONINFO_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PFAssertionInfo : NSObject

@property (retain) NSArray *backtrace; // ivar: _backtrace
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