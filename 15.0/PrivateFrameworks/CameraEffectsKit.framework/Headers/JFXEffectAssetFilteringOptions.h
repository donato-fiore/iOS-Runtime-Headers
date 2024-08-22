// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTASSETFILTERINGOPTIONS_H
#define JFXEFFECTASSETFILTERINGOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface JFXEffectAssetFilteringOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger aspectRatio; // ivar: _aspectRatio
@property (nonatomic) NSInteger colorDynamicRange; // ivar: _colorDynamicRange
@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (nonatomic) NSInteger filteringMode; // ivar: _filteringMode
@property (nonatomic) NSInteger quality; // ivar: _quality
@property (nonatomic) NSInteger usageMode; // ivar: _usageMode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif