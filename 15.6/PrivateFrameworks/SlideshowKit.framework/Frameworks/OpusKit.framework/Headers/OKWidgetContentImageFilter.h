// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETCONTENTIMAGEFILTER_H
#define OKWIDGETCONTENTIMAGEFILTER_H

@class CIImage, NSURL;
@protocol JSOKWidgetContentImageFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter <JSOKWidgetContentImageFilter>

 {
    CIImage *_imageOutput;
}


@property (retain, nonatomic) NSURL *inputImageURL; // ivar: _inputImageURL


+(id)filterWithImageURL:(id)arg0 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(void)setSettingInputImageURL:(id)arg0 ;


@end


#endif