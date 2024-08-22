// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIJSERROR_H
#define VUIJSERROR_H

@class NSError;


#import "VUIJSObject.h"
#import "VUIJSError.h"

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}


@property (readonly, nonatomic) NSError *wrappedError; // ivar: _wrappedError


-(id)code;
-(id)description;
-(id)domain;
-(id)failureReason;
-(id)initWithError:(id)arg0 appContext:(id)arg1 ;
-(id)recoverySuggestion;
-(id)underlyingError;
-(id)userInfo;


@end


#endif