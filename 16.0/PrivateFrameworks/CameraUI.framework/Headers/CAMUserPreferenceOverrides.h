// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMUSERPREFERENCEOVERRIDES_H
#define CAMUSERPREFERENCEOVERRIDES_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CAMUserPreferenceOverrides : NSObject

@property (retain, nonatomic) NSNumber *aspectRatioCrop; // ivar: _aspectRatioCrop
@property (retain, nonatomic) NSNumber *captureDevice; // ivar: _captureDevice
@property (retain, nonatomic) NSNumber *captureMode; // ivar: _captureMode
@property (retain, nonatomic) NSNumber *cinematicConfiguration; // ivar: _cinematicConfiguration
@property (retain, nonatomic) NSNumber *flashMode; // ivar: _flashMode
@property (readonly, nonatomic) BOOL hasOverrides;
@property (retain, nonatomic) NSNumber *slomoConfiguration; // ivar: _slomoConfiguration
@property (retain, nonatomic) NSNumber *torchMode; // ivar: _torchMode
@property (retain, nonatomic) NSNumber *videoConfiguration; // ivar: _videoConfiguration
@property (retain, nonatomic) NSNumber *wantsQRCodes; // ivar: _wantsQRCodes


-(id)initWithConfigurationURL:(id)arg0 ;
-(id)initWithLaunchOptions:(id)arg0 ;
-(id)initWithOverrides:(id)arg0 ;
-(id)initWithShortcutItem:(id)arg0 ;


@end


#endif