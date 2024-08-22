// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOFEATURELISTSTRINGHELPER_H
#define VCVIDEOFEATURELISTSTRINGHELPER_H


#import <Foundation/Foundation.h>


@interface VCVideoFeatureListStringHelper : NSObject



+(BOOL)extractAspectRatios:(char *)arg0 landscapeX:(*int)arg1 landscapeY:(*int)arg2 portraitX:(*int)arg3 portraitY:(*int)arg4 ;
+(BOOL)extractAspectRatios:(char *)arg0 prefix:(char *)arg1 landscapeX:(*int)arg2 landscapeY:(*int)arg3 portraitX:(*int)arg4 portraitY:(*int)arg5 ;
+(BOOL)extractExpectedAspectRatios:(char *)arg0 expectedLandscapeX:(*int)arg1 expectedLandscapeY:(*int)arg2 expectedPortraitX:(*int)arg3 expectedPortraitY:(*int)arg4 ;
+(BOOL)featureListString:(char *)arg0 maxSize:(NSInteger)arg1 payload:(int)arg2 featureListStrings:(struct __CFDictionary *)arg3 ;
+(BOOL)findFeatureString:(char *)arg0 value:(char *)arg1 valueLength:(NSUInteger)arg2 withPrefix:(char *)arg3 ;
+(id)deriveAspectRatioFLS;
+(id)deriveAspectRatioFLSWithPortraitRatio:(struct CGSize )arg0 landscapeRatio:(struct CGSize )arg1 expectedPortraitRatio:(struct CGSize )arg2 expectedLandscapeRatio:(struct CGSize )arg3 ;
+(id)newEmptyFeatureString;
+(id)newEmptyFeatureStringWithPayload:(int)arg0 ;
+(id)newFeatureListStringsDictForGroupID:(unsigned int)arg0 isOneToOne:(BOOL)arg1 ;
+(id)newLocalFeaturesStringWithType:(unsigned char)arg0 ;
+(id)newLocalFeaturesStringWithType:(unsigned char)arg0 aspectRatioFLS:(id)arg1 ;
+(id)newScreenFeatureString;
+(id)retrieveRawFeaturesStringWithType:(unsigned char)arg0 ;
+(int)defaultPayload:(struct __CFDictionary *)arg0 ;
+(void)aspectRatioPortrait:(struct CGSize *)arg0 landscape:(struct CGSize *)arg1 isMismatchedOrientation:(BOOL)arg2 ;
+(void)fixInvalidAspectRatioPortrait:(struct CGSize *)arg0 landscape:(struct CGSize *)arg1 ;


@end


#endif