// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTENTPACKAGE_H
#define TPSCONTENTPACKAGE_H

@class NSDictionary, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPSAssetSizes.h"

@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TPSAssetSizes *assetSizes; // ivar: _assetSizes
@property (retain, nonatomic) NSDictionary *collectionMap; // ivar: _collectionMap
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSArray *orderedCollectionIdentifiers; // ivar: _orderedCollectionIdentifiers
@property (readonly, nonatomic) NSArray *orderedCollections;
@property (retain, nonatomic) NSDictionary *tipMap; // ivar: _tipMap


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif