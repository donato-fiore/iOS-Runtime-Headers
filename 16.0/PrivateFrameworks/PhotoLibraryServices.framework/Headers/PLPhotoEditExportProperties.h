// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOEDITEXPORTPROPERTIES_H
#define PLPHOTOEDITEXPORTPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PLPhotoEditExportProperties : NSObject

@property (readonly, nonatomic) CGFloat baseDuration; // ivar: _baseDuration
@property (readonly, nonatomic) NSInteger baseEXIFOrientation; // ivar: _baseEXIFOrientation
@property (readonly, nonatomic) NSUInteger imageHeight; // ivar: _imageHeight
@property (readonly, nonatomic) NSUInteger imageWidth; // ivar: _imageWidth


+(id)exportPropertiesWithImageWidth:(NSUInteger)arg0 imageHeight:(NSUInteger)arg1 exifOrientation:(NSInteger)arg2 ;
+(id)exportPropertiesWithImageWidth:(NSUInteger)arg0 imageHeight:(NSUInteger)arg1 exifOrientation:(NSInteger)arg2 duration:(CGFloat)arg3 ;


@end


#endif