// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFHTTPRESPONSEINTERNAL_H
#define HMFHTTPRESPONSEINTERNAL_H

@class NSData, NSDictionary;
@protocol NSCopying;


#import "HMFObject.h"
#import "HMFActivity.h"

@interface HMFHTTPResponseInternal : HMFObject <NSCopying>



@property (retain, nonatomic) HMFActivity *activity; // ivar: _activity
@property (copy, nonatomic) NSData *body; // ivar: _body
@property (copy, nonatomic) NSDictionary *headerFields; // ivar: _headerFields
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStatusCode:(NSInteger)arg0 headerFields:(id)arg1 body:(id)arg2 ;
-(void)setHeaderValue:(id)arg0 forHeaderKey:(id)arg1 ;


@end


#endif