// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAUTHORIZEMACHINEREQUEST_H
#define ICAUTHORIZEMACHINEREQUEST_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICAuthorizeMachineRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSString *keybagPath; // ivar: _keybagPath
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) NSData *tokenData; // ivar: _tokenData


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif