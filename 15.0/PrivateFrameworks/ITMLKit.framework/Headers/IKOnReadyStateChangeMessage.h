// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKONREADYSTATECHANGEMESSAGE_H
#define IKONREADYSTATECHANGEMESSAGE_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface IKOnReadyStateChangeMessage : NSObject

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) unsigned int readyState; // ivar: _readyState
@property (readonly, nonatomic) unsigned int statusCode; // ivar: _statusCode
@property (copy, nonatomic) NSString *statusText; // ivar: _statusText


-(id)initWithReadyState:(unsigned int)arg0 statusCode:(unsigned int)arg1 statusText:(id)arg2 error:(id)arg3 ;


@end


#endif