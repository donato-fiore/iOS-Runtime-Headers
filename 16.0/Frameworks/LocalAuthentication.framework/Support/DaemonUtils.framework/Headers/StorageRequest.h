// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STORAGEREQUEST_H
#define STORAGEREQUEST_H



#import "Request.h"

@interface StorageRequest : Request

@property (readonly, nonatomic) NSInteger domain; // ivar: _domain
@property (readonly, nonatomic) NSInteger key; // ivar: _key


-(id)initWithStorageDomain:(NSInteger)arg0 key:(NSInteger)arg1 ;


@end


#endif