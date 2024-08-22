// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCONFLICTINGCONTROLCONFIGURATION_H
#define CAMCONFLICTINGCONTROLCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CAMConflictingControlConfiguration : NSObject

@property (readonly, nonatomic) NSInteger desiredFlashMode; // ivar: _desiredFlashMode
@property (readonly, nonatomic) NSInteger desiredHDRMode; // ivar: _desiredHDRMode
@property (readonly, nonatomic) NSInteger desiredLivePhotoMode; // ivar: _desiredLivePhotoMode
@property (readonly, nonatomic) NSUInteger desiredLowLightControlMode; // ivar: _desiredLowLightControlMode
@property (readonly, nonatomic) NSInteger desiredRAWMode; // ivar: _desiredRAWMode
@property (readonly, nonatomic) NSInteger flashAndHDRConflictingControl; // ivar: _flashAndHDRConflictingControl
@property (readonly, nonatomic) NSUInteger lowLightConflicts; // ivar: _lowLightConflicts
@property (readonly, nonatomic) NSUInteger rawConflicts; // ivar: _rawConflicts


+(NSUInteger)resolveDesiredLowLightControlMode:(NSUInteger)arg0 lowLightConflicts:(NSUInteger)arg1 resolvedFlashMode:(NSInteger)arg2 ;
+(void)resolveDesiredFlashMode:(NSInteger)arg0 desiredHDRMode:(NSInteger)arg1 primaryConflictingControl:(NSInteger)arg2 device:(NSInteger)arg3 toFlashMode:(*NSInteger)arg4 HDRMode:(*NSInteger)arg5 ;
+(void)resolveDesiredRAWMode:(NSInteger)arg0 rawConflicts:(NSUInteger)arg1 desiredLivePhotoMode:(NSInteger)arg2 desiredFlashMode:(NSInteger)arg3 toRAWMode:(*NSInteger)arg4 toLivePhotoMode:(*NSInteger)arg5 toFlashMode:(*NSInteger)arg6 ;
-(id)initWithDesiredFlashMode:(NSInteger)arg0 desiredHDRMode:(NSInteger)arg1 flashAndHDRConflictingControl:(NSInteger)arg2 desiredLivePhotoMode:(NSInteger)arg3 desiredRAWMode:(NSInteger)arg4 rawConflicts:(NSUInteger)arg5 desiredLowLightControlMode:(NSUInteger)arg6 lowLightConflicts:(NSUInteger)arg7 ;


@end


#endif