// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSFILTERSHARDITEM_H
#define BCSFILTERSHARDITEM_H

@class NSString, _PASBloomFilter, NSDate;
@protocol BCSFilterShardItemProtocol, NSCopying, NSSecureCoding;


#import "BCSShardItem.h"

@interface BCSFilterShardItem : BCSShardItem <BCSFilterShardItemProtocol, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *base64EncodedString;
@property (readonly, nonatomic) _PASBloomFilter *bloomFilter; // ivar: _bloomFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger shardCount;
@property (readonly, nonatomic) NSInteger startIndex;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(BOOL)containsItemMatching:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBloomFilter:(id)arg0 bloomFilterString:(id)arg1 startIndex:(NSInteger)arg2 shardCount:(NSInteger)arg3 type:(NSInteger)arg4 expirationDate:(id)arg5 ;
-(id)initWithBloomFilterString:(id)arg0 startIndex:(NSInteger)arg1 shardCount:(NSInteger)arg2 type:(NSInteger)arg3 expirationDate:(id)arg4 ;
-(id)initWithBusinessLinkShardItem:(id)arg0 ;
-(id)initWithChatSuggestShardItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObj:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithRecord:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif