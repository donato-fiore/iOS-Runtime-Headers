// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSUZELEASESESSIONCONFIGURATION_H
#define ICSUZELEASESESSIONCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICSuzeLeaseSessionConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) id *leaseID; // ivar: _leaseID
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestContext:(id)arg0 leaseID:(id)arg1 mediaType:(NSInteger)arg2 ;


@end


#endif