// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDLONGLIVEDOPERATIONPERSISTEDCALLBACK_H
#define CKDLONGLIVEDOPERATIONPERSISTEDCALLBACK_H

@class NSInvocation, Protocol;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSInvocation *invocation; // ivar: _invocation
@property (nonatomic) BOOL isCompletionCallback; // ivar: _isCompletionCallback
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtocol:(id)arg0 invocation:(id)arg1 isCompletionCallback:(BOOL)arg2 ;
-(void)_validateInvocation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif