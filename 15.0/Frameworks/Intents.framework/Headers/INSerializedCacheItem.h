// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSERIALIZEDCACHEITEM_H
#define INSERIALIZEDCACHEITEM_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(void)deserializeCacheItem:(id)arg0 completion:(id)arg1 ;
+(void)deserializeCacheItems:(id)arg0 completion:(id)arg1 ;
+(void)serializeCacheableObjects:(id)arg0 completion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 payload:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif