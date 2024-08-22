// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFHTTPRESPONSE_H
#define HMFHTTPRESPONSE_H

@class NSData, NSDictionary;
@protocol NSCopying, NSMutableCopying;


#import "HMFObject.h"
#import "HMFHTTPResponseInternal.h"
#import "HMFHTTPRequest.h"

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) HMFHTTPResponseInternal *internal; // ivar: _internal
@property (readonly, nonatomic) HMFHTTPRequest *request; // ivar: _request
@property (readonly, nonatomic) NSInteger statusCode;


-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 internalResponse:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif