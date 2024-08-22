// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGESETTINGS_H
#define BWSTILLIMAGESETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BWStillImageCaptureSettings.h"
#import "BWStillImageProcessingSettings.h"
#import "FigCaptureStillImageSettings.h"

@interface BWStillImageSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings; // ivar: _captureSettings
@property (readonly, nonatomic) BWStillImageProcessingSettings *processingSettings; // ivar: _processingSettings
@property (readonly, nonatomic) FigCaptureStillImageSettings *requestedSettings; // ivar: _requestedSettings
@property (readonly, nonatomic) NSInteger settingsID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestedSettings:(id)arg0 captureSettings:(id)arg1 processingSettings:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif