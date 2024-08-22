// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMUSEREXCEPTION_H
#define EDAMUSEREXCEPTION_H

@class NSNumber, NSString;


#import "FATException.h"

@interface EDAMUserException : FATException

@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *parameter; // ivar: _parameter


+(id)structFields;
+(id)structName;


@end


#endif