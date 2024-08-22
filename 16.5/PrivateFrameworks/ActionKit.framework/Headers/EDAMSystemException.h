// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMSYSTEMEXCEPTION_H
#define EDAMSYSTEMEXCEPTION_H

@class NSNumber, NSString;


#import "FATException.h"

@interface EDAMSystemException : FATException

@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSNumber *rateLimitDuration; // ivar: _rateLimitDuration


+(id)structFields;
+(id)structName;


@end


#endif