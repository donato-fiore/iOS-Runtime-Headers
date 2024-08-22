// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACTIVITYASSETITEM_H
#define PUACTIVITYASSETITEM_H

@class PHAsset;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUActivityAssetItem : NSObject <NSCopying>



@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) BOOL excludeAccessibilityDescription; // ivar: _excludeAccessibilityDescription
@property (nonatomic) BOOL excludeCaption; // ivar: _excludeCaption
@property (nonatomic) BOOL excludeLiveness; // ivar: _excludeLiveness
@property (nonatomic) BOOL excludeLocation; // ivar: _excludeLocation


+(id)itemsForAssets:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActivityAssetItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)localIdentifier;


@end


#endif