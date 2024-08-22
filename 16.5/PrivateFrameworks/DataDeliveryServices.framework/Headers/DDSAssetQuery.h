// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSASSETQUERY_H
#define DDSASSETQUERY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DDSAttributeFilter.h"

@interface DDSAssetQuery : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *cacheKey;
@property BOOL cachedOnly; // ivar: _cachedOnly
@property (readonly, nonatomic) DDSAttributeFilter *filter; // ivar: _filter
@property BOOL installedOnly; // ivar: _installedOnly
@property BOOL latestOnly; // ivar: _latestOnly
@property BOOL localOnly; // ivar: _localOnly


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssetQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dumpDescription;
-(id)init;
-(id)initWithAssetType:(id)arg0 filter:(id)arg1 ;
-(id)initWithAssetType:(id)arg0 filter:(id)arg1 localOnly:(BOOL)arg2 installedOnly:(BOOL)arg3 latestOnly:(BOOL)arg4 cachedOnly:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif