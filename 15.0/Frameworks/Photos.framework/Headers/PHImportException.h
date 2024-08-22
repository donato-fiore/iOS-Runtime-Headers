// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTEXCEPTION_H
#define PHIMPORTEXCEPTION_H

@class NSDate, NSString, NSError;

#import <Foundation/Foundation.h>


@interface PHImportException : NSObject

@property (readonly, nonatomic) NSDate *createDate; // ivar: _createDate
@property (readonly, nonatomic) NSUInteger lineNumber; // ivar: _lineNumber
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *sourceCodeFile; // ivar: _sourceCodeFile
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSError *underlyingError; // ivar: _underlyingError


+(id)logForAllExceptions:(id)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 path:(id)arg1 underlyingError:(id)arg2 file:(char *)arg3 line:(NSUInteger)arg4 ;


@end


#endif