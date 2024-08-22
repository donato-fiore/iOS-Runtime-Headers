// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOMAINCONFIGITEM_H
#define BCSDOMAINCONFIGITEM_H

@class NSURL;


#import "BCSConfigItem.h"

@interface BCSDomainConfigItem : BCSConfigItem {
    NSInteger _domainShardCount;
    NSInteger _filterShardCount;
}


@property (readonly, nonatomic) NSURL *domainMegaShardURL; // ivar: _domainMegaShardURL
@property (readonly, nonatomic) NSInteger domainShardCount;


+(BOOL)supportsSecureCoding;
+(id)keysRequestedForCloudKitFetch;
-(NSInteger)filterShardCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBuckets:(NSInteger)arg0 domainShards:(NSInteger)arg1 filterShards:(NSInteger)arg2 expirationDate:(id)arg3 ;
-(id)initWithBuckets:(NSInteger)arg0 domainShards:(NSInteger)arg1 filterShards:(NSInteger)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 domainMegaShardURL:(id)arg5 itemTTL:(id)arg6 ;
-(id)initWithBuckets:(NSInteger)arg0 shards:(NSInteger)arg1 expirationDate:(id)arg2 filterMegaShardURL:(id)arg3 itemTTL:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObj:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif