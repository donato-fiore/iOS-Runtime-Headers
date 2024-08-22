// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDEVICECONFIGURATION_H
#define PLDEVICECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PLDeviceConfiguration : NSObject

@property (nonatomic) BOOL isMac; // ivar: _isMac
@property (nonatomic) BOOL isMigrationService; // ivar: _isMigrationService
@property (nonatomic) BOOL isPad; // ivar: _isPad
@property (nonatomic) BOOL isRetina; // ivar: _isRetina
@property (readonly, nonatomic) BOOL isRidingCrudSnow; // ivar: _isRidingCrudSnow
@property (readonly, nonatomic) BOOL isRidingPowderSnow; // ivar: _isRidingPowderSnow
@property (nonatomic) BOOL isTV; // ivar: _isTV
@property (nonatomic) BOOL isWatch; // ivar: _isWatch
@property (readonly, nonatomic) NSUInteger logicalScreenPixelSize;
@property (readonly, nonatomic) CGSize logicalScreenSize; // ivar: _logicalScreenSize
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) BOOL shouldUseNanoThumbnailFormats;
@property (nonatomic) BOOL supportsASTC; // ivar: _supportsASTC


+(id)defaultDeviceConfiguration;
-(id)description;
-(id)initWithLogicalScreenSize:(struct CGSize )arg0 screenScale:(CGFloat)arg1 deviceClass:(*void)arg2 isRidingCrudSnow:(BOOL)arg3 isRidingPowderSnow:(BOOL)arg4 supportsASTC:(BOOL)arg5 isMigrationService:(BOOL)arg6 ;


@end


#endif