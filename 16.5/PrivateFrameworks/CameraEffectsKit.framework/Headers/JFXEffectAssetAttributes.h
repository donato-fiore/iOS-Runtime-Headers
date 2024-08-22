// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXEFFECTASSETATTRIBUTES_H
#define JFXEFFECTASSETATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface JFXEffectAssetAttributes : NSObject <NSCopying>



@property (nonatomic) NSInteger aspectRatio; // ivar: _aspectRatio
@property (nonatomic) NSInteger colorDynamicRange; // ivar: _colorDynamicRange
@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (nonatomic) NSInteger quality; // ivar: _quality
@property (nonatomic) NSInteger usageMode; // ivar: _usageMode


-(BOOL)isMatchingFilterAttributes:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif