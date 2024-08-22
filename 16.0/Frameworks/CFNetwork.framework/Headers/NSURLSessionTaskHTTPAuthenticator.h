// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSURLSESSIONTASKHTTPAUTHENTICATOR_H
#define NSURLSESSIONTASKHTTPAUTHENTICATOR_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying>



@property (copy) NSSet *statusCodes; // ivar: _statusCodes


+(id)sessionTaskHTTPAuthenticatorWithContext:(id)arg0 statusCodes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStatusCodes:(id)arg0 ;
-(void)dealloc;
-(void)getAuthenticationHeadersForTask:(id)arg0 task:(id)arg1 response:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif