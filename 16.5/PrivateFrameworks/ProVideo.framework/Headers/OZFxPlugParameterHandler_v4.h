// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZFXPLUGPARAMETERHANDLER_V4_H
#define OZFXPLUGPARAMETERHANDLER_V4_H

@class NSString;
@protocol FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4, FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2;


#import "OZFxPlugParameterHandler.h"

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler <FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4, FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)_getFontName:(?)arg0 fromParmatTime;
-(?)getBitmap:(?)arg0 layerOffsetX:(?)arg1 layerOffsetY:(?)arg2 requestInfo:(?)arg3 fromParmatFxTime;
-(?)getBoolValue:(?)arg0 fromParmatFxTime;
-(?)getCustomParameterValue:(?)arg0 fromParmatFxTime;
-(?)getFloatValue:(?)arg0 fromParmatFxTime;
-(?)getFontName:(?)arg0 fromParmatFxTime;
-(?)getGradientSamples:(?)arg0 numSamples:(?)arg1 depth:(?)arg2 fromParmatFxTime;
-(?)getGradientStartEnd:(?)arg0 startY:(?)arg1 endX:(?)arg2 endY:(?)arg3 type:(?)arg4 fromParmatFxTime;
-(?)getHistogramBlackIn:(?)arg0 BlackOut:(?)arg1 WhiteIn:(?)arg2 WhiteOut:(?)arg3 Gamma:(?)arg4 forChannel:(?)arg5 fromParmatFxTime;
-(?)getIntValue:(?)arg0 fromParmatFxTime;
-(?)getPathID:(?)arg0 fromParmatFxTime;
-(?)getRGBABitmap:(?)arg0 layerOffsetX:(?)arg1 layerOffsetY:(?)arg2 requestInfo:(?)arg3 fromParameteratTime;
-(?)getRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 alphaValue:(?)arg3 fromParmatFxTime;
-(?)getRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 fromParmatFxTime;
-(?)getTexture:(?)arg0 layerOffsetX:(?)arg1 layerOffsetY:(?)arg2 requestInfo:(?)arg3 fromParmatFxTime;
-(?)getXValue:(?)arg0 YValue:(?)arg1 fromParmatFxTime;
-(?)setBoolValue:(?)arg0 toParmatFxTime;
-(?)setCustomParameterValue:(?)arg0 toParmatFxTime;
-(?)setFloatValue:(?)arg0 toParmatFxTime;
-(?)setHistogramBlackIn:(?)arg0 blackOut:(?)arg1 whiteIn:(?)arg2 whiteOut:(?)arg3 gamma:(?)arg4 forChannel:(?)arg5 fromParmatFxTime;
-(?)setIntValue:(?)arg0 toParmatFxTime;
-(?)setPathID:(?)arg0 toParmatFxTime;
-(?)setRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 alphaValue:(?)arg3 toParmatFxTime;
-(?)setRedValue:(?)arg0 greenValue:(?)arg1 blueValue:(?)arg2 toParmatFxTime;
-(?)setXValue:(?)arg0 YValue:(?)arg1 toParmatFxTime;
-(BOOL)addFlags:(unsigned int)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)addFontMenuWithName:(id)arg0 parmId:(unsigned int)arg1 fontName:(id)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)addHelpButtonWithName:(id)arg0 parmId:(unsigned int)arg1 selector:(SEL)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)addPushButtonWithName:(id)arg0 parmId:(unsigned int)arg1 selector:(SEL)arg2 parmFlags:(unsigned int)arg3 ;
-(BOOL)getCustomParameterValue:(*id)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)getFontName:(*id)arg0 fromParm:(unsigned int)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)getParameterFlags:(*unsigned int)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)getStringParameterValue:(*id)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)imageSize:(struct CGSize *)arg0 fromParameter:(unsigned int)arg1 atTime:(struct ? )arg2 ;
-(BOOL)removeFlags:(unsigned int)arg0 fromParm:(unsigned int)arg1 ;
-(BOOL)setCustomParameterValue:(id)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)setParameterFlags:(unsigned int)arg0 toParm:(unsigned int)arg1 ;
-(BOOL)setStringParameterValue:(id)arg0 toParm:(unsigned int)arg1 ;
-(id)pushButtonSelectorNameForParameterID:(unsigned int)arg0 ;


@end


#endif