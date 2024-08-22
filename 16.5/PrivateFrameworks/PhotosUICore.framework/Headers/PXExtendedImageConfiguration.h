// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEXTENDEDIMAGECONFIGURATION_H
#define PXEXTENDEDIMAGECONFIGURATION_H

@class NSBundle, UIImageConfiguration, NSString, UIColor;

#import <Foundation/Foundation.h>


@interface PXExtendedImageConfiguration : NSObject

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) UIImageConfiguration *imageConfiguration; // ivar: _imageConfiguration
@property (readonly, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) BOOL isSystemImage; // ivar: _isSystemImage
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)init;
-(id)initWithImageName:(id)arg0 ;
-(id)initWithImageName:(id)arg0 isSystemImage:(BOOL)arg1 ;
-(id)initWithImageName:(id)arg0 isSystemImage:(BOOL)arg1 tintColor:(id)arg2 imageConfiguration:(id)arg3 inBundle:(id)arg4 ;


@end


#endif