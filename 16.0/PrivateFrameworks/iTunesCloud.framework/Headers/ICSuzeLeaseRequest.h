// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSUZELEASEREQUEST_H
#define ICSUZELEASEREQUEST_H

@class NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICSuzeLeaseRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSData *clientData; // ivar: _clientData
@property (readonly, copy, nonatomic) NSString *leaseID; // ivar: _leaseID
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestContext:(id)arg0 requestType:(NSInteger)arg1 leaseID:(id)arg2 mediaType:(NSInteger)arg3 clientData:(id)arg4 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif