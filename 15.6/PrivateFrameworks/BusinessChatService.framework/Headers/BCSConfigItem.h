// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSCONFIGITEM_H
#define BCSCONFIGITEM_H

@class NSString, NSDate, NSURL, NSNumber;
@protocol BCSExpiring, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCSConfigItem : NSObject <BCSExpiring, NSCopying, NSSecureCoding>

 {
    NSInteger _shards;
}


@property (readonly, nonatomic) NSInteger buckets; // ivar: _buckets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSURL *filterMegaShardURL; // ivar: _filterMegaShardURL
@property (readonly, nonatomic) NSInteger filterShardCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *itemTTL; // ivar: _itemTTL
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keysRequestedForCloudKitFetch;
-(id)_extractItemTTLFromConfigRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBuckets:(NSInteger)arg0 shards:(NSInteger)arg1 expirationDate:(id)arg2 ;
-(id)initWithBuckets:(NSInteger)arg0 shards:(NSInteger)arg1 expirationDate:(id)arg2 filterMegaShardURL:(id)arg3 itemTTL:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObj:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif