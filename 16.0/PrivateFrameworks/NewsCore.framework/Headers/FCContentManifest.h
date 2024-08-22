// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCONTENTMANIFEST_H
#define FCCONTENTMANIFEST_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FCContentManifest.h"

@interface FCContentManifest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *assetURLs; // ivar: _assetURLs
@property (readonly, copy, nonatomic) NSArray *assetWrappingKeyIDs; // ivar: _assetWrappingKeyIDs
@property (readonly, copy, nonatomic) NSArray *avAssetIDs; // ivar: _avAssetIDs
@property (readonly, copy, nonatomic) NSArray *avAssetKeyIDs; // ivar: _avAssetKeyIDs
@property (readonly, copy, nonatomic) NSArray *avAssetKeyURIs;
@property (readonly, copy, nonatomic) FCContentManifest *copyWithAssetsOnly;
@property (readonly, copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs


+(BOOL)supportsSecureCoding;
+(id)manifestByMergingManifest:(id)arg0 withManifest:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssetURLs:(id)arg0 assetWrappingKeyIDs:(id)arg1 recordIDs:(id)arg2 avAssetIDs:(id)arg3 avAssetKeyIDs:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManifests:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif