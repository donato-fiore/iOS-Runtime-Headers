// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXEFFECTPREVIEWOPTIONS_H
#define JFXEFFECTPREVIEWOPTIONS_H

@class PVColorSpace;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface JFXEffectPreviewOptions : NSObject <NSCopying>



@property (retain, nonatomic) PVColorSpace *outputColorSpace; // ivar: _outputColorSpace
@property (nonatomic) unsigned int parentCode; // ivar: _parentCode
@property (nonatomic) NSUInteger quality; // ivar: _quality


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initPreviewOptions;


@end


#endif