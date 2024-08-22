// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSBRIGHTNESSSETTINGSDETAIL_H
#define PSBRIGHTNESSSETTINGSDETAIL_H

@class NSString;
@protocol PSSettingsDetail;

#import <Foundation/Foundation.h>


@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)autoBrightnessEnabled;
+(BOOL)deviceSupportsAutoBrightness;
+(CGFloat)currentValue;
+(CGFloat)incrementedBrightnessValue:(CGFloat)arg0 ;
+(id)iconImage;
+(id)preferencesURL;
+(void)beginBrightnessAdjustmentTransaction;
// +(void)beginObservingExternalBrightnessChanges:(id)arg0 changedAction:(unk)arg1  ;
+(void)endBrightnessAdjustmentTransaction;
+(void)endObservingExternalBrightnessChanges;
+(void)incrementBrightnessValue:(CGFloat)arg0 ;
+(void)setAutoBrightnessEnabled:(BOOL)arg0 ;
+(void)setValue:(CGFloat)arg0 ;


@end


#endif