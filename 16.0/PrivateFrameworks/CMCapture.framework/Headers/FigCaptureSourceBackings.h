// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESOURCEBACKINGS_H
#define FIGCAPTURESOURCEBACKINGS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceCommonSettings.h"

@interface FigCaptureSourceBackings : NSObject

@property (readonly, nonatomic) FigCaptureSourceCommonSettings *commonSettings; // ivar: _commonSettings
@property (readonly, nonatomic) NSDictionary *continuityCaptureCameraCapabilities; // ivar: _continuityCaptureCameraCapabilities
@property (readonly, nonatomic) NSDictionary *h264Settings; // ivar: _h264Settings
@property (readonly, nonatomic) NSDictionary *hevcSettings; // ivar: _hevcSettings
@property (readonly, nonatomic) NSArray *sourceInfoDictionaries; // ivar: _sourceInfoDictionaries


+(id)sharedCaptureSourceBackings;
+(void)initialize;
-(id)initWithSourceInfoDictionaries:(id)arg0 commonSettings:(id)arg1 hevcSettings:(id)arg2 h264Settings:(id)arg3 ;
-(void)dealloc;


@end


#endif