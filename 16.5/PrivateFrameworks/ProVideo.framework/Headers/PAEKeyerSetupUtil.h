// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYERSETUPUTIL_H
#define PAEKEYERSETUPUTIL_H


#import <Foundation/Foundation.h>

#import "PAEKeyerCbCrSetup.h"
#import "PAEKeyerLumaSetup.h"

@interface PAEKeyerSetupUtil : NSObject {
    *void _omKeyer;
    PAEKeyerCbCrSetup *_keyerCbCrSetup;
    PAEKeyerLumaSetup *_keyerLumaSetup;
    *void _omSamples;
}




-(*void)omKeyer;
-(?)initWithOMSamples:(?)arg0 colorPrimariesatTime;
-(?)keyerActiveAt;
-(?)removeKeyframeAtTime;
-(?)removeKeyframeAtTime:(?)arg0 forParamwithAPI;
-(?)syncChromaWithDB;
-(?)syncLumaWithDB;
-(?)syncWithDBsetAsDefault;
-(BOOL)addTolerance;
-(BOOL)autoScale;
-(BOOL)defineEdge;
-(BOOL)tight;
-(CGFloat)autoAdjustSoftGap;
-(CGFloat)autoKeySoftness;
-(CGFloat)highlightsGain;
-(CGFloat)shadowsGain;
-(CGFloat)simpleKeyAmount;
-(CGFloat)spreadGain;
-(void)dealloc;
-(void)setAddTolerance:(BOOL)arg0 ;
-(void)setDefineEdge:(BOOL)arg0 ;


@end


#endif