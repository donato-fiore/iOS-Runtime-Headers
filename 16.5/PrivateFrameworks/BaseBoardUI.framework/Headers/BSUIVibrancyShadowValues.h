// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIVIBRANCYSHADOWVALUES_H
#define BSUIVIBRANCYSHADOWVALUES_H



#import "BSUIVibrancyValues.h"

@interface BSUIVibrancyShadowValues : BSUIVibrancyValues

@property (readonly, nonatomic) CAColorMatrix vibrantColorMatrix; // ivar: _vibrantColorMatrix


+(struct CAColorMatrix )_colorizedShadowColorMatrixForType:(NSInteger)arg0 heroColor:(id)arg1 backgroundType:(NSInteger)arg2 ;
+(struct CAColorMatrix )_darkeningShadowMatrix;
+(struct CAColorMatrix )_lighteningShadowMatrix;
+(struct CAColorMatrix )_shadowColorMatrixForType:(NSInteger)arg0 heroColor:(id)arg1 backgroundType:(NSInteger)arg2 ;
-(id)transformShadowColor:(id)arg0 ;
-(void)calculateValuesForConfiguration:(id)arg0 ;


@end


#endif