// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREITEMMETADATACACHEKEY_H
#define MPSTOREITEMMETADATACACHEKEY_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPStoreItemMetadataCacheKey : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSNumber *enqueuerAccountIdentifier; // ivar: _enqueuerAccountIdentifier
@property (nonatomic, getter=isPersonalized) BOOL personalized; // ivar: _personalized
@property (copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier


+(void)_fastGetCacheKeyWithRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)_slowGetCacheKeyWithRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)getCacheKeyWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_isGoodCacheKey;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRequest:(id)arg0 response:(id)arg1 ;


@end


#endif