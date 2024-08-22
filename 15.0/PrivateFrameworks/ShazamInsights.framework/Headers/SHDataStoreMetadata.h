// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHDATASTOREMETADATA_H
#define SHDATASTOREMETADATA_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SHDataStoreMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (readonly, copy, nonatomic) NSString *storefront; // ivar: _storefront


-(id)initWithStorefront:(id)arg0 fetchDate:(id)arg1 etag:(id)arg2 ;


@end


#endif