// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSASSETQUERY_H
#define DDSASSETQUERY_H

@class NSString;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DDSAttributeFilter.h"

@interface DDSAssetQuery : NSObject <NSSecureCoding>

 {
    NSString *_description;
}


@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL cachedOnly; // ivar: _cachedOnly
@property (readonly, nonatomic) DDSAttributeFilter *filter; // ivar: _filter
@property (nonatomic) BOOL installedOnly; // ivar: _installedOnly
@property (nonatomic) BOOL latestOnly; // ivar: _latestOnly
@property (nonatomic) BOOL localOnly; // ivar: _localOnly
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssetQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssetType:(id)arg0 filter:(id)arg1 ;
-(id)initWithAssetType:(id)arg0 filter:(id)arg1 localOnly:(BOOL)arg2 installedOnly:(BOOL)arg3 latestOnly:(BOOL)arg4 cachedOnly:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateDescription;


@end


#endif