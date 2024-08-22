// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETBASICFILTER_H
#define OKWIDGETBASICFILTER_H

@class CIFilter, NSString, CIImage;
@protocol OKSettingsSupport;


#import "OKPresentation.h"

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (nonatomic) OKPresentation *inputPresentation; // ivar: _inputPresentation
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif