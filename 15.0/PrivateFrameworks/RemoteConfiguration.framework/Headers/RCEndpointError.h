// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCENDPOINTERROR_H
#define RCENDPOINTERROR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RCEndpointError : NSObject

@property (readonly, copy, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *stacktrace; // ivar: _stacktrace


+(id)endpointErrorWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithErrorCode:(id)arg0 message:(id)arg1 stacktrace:(id)arg2 ;


@end


#endif