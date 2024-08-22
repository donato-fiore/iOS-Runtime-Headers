// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPARENTIMAGESENSORSETTINGS_H
#define ARPARENTIMAGESENSORSETTINGS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARParentImageSensorSettings : NSObject <NSCopying>



@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout; // ivar: _allowCameraInMultipleForegroundAppLayout
@property (nonatomic) BOOL audioCaptureEnabled; // ivar: _audioCaptureEnabled
@property (copy, nonatomic) NSArray *settings; // ivar: _settings


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif