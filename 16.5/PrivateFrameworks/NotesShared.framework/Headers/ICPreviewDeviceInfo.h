// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPREVIEWDEVICEINFO_H
#define ICPREVIEWDEVICEINFO_H


#import <Foundation/Foundation.h>

#import "ICAppearanceInfo.h"

@interface ICPreviewDeviceInfo : NSObject

@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo; // ivar: _appearanceInfo
@property (nonatomic) CGFloat imageSize; // ivar: _imageSize
@property (nonatomic) CGFloat scale; // ivar: _scale


+(id)previewDeviceInfoForPreviewImage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)deviceInfoFromAddingAppearanceInfo:(id)arg0 ;
-(id)init;
-(id)initWithImageSize:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)initWithImageSize:(CGFloat)arg0 scale:(CGFloat)arg1 appearanceInfo:(id)arg2 ;


@end


#endif