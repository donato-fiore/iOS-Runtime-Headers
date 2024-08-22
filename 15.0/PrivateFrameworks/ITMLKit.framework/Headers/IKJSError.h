// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSERROR_H
#define IKJSERROR_H

@class NSNumber, NSString, NSDictionary, NSError;
@protocol IKJSError;


#import "IKJSObject.h"
#import "IKJSError.h"

@interface IKJSError : IKJSObject <IKJSError>

 {
    IKJSError *_jsUnderlyingError;
}


@property (readonly, nonatomic) NSNumber *code;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *failureReason;
@property (readonly, nonatomic) NSString *recoverySuggestion;
@property (readonly, nonatomic) IKJSError *underlyingError;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSError *wrappedError; // ivar: _wrappedError


-(id)initWithError:(id)arg0 appContext:(id)arg1 ;


@end


#endif