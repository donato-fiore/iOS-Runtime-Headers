// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICUSERVERIFICATIONREQUEST_H
#define ICUSERVERIFICATIONREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"
#import "ICUserVerificationContext.h"

@interface ICUserVerificationRequest : NSObject <NSCopying>



@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext; // ivar: _storeRequestContext
@property (readonly, copy, nonatomic) ICUserVerificationContext *verificationContext; // ivar: _verificationContext


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVerificationContext:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif