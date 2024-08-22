// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIVIBRANCYEFFECTVALUES_H
#define BSUIVIBRANCYEFFECTVALUES_H

@class NSString;


#import "BSUIVibrancyValues.h"

@interface BSUIVibrancyEffectValues : BSUIVibrancyValues

@property (readonly, nonatomic) CAColorMatrix backdropColorMatrix; // ivar: _backdropColorMatrix
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, nonatomic) CAColorMatrix vibrantColorMatrix; // ivar: _vibrantColorMatrix


+(struct CAColorMatrix )_colorizedMaterialBackdropMatrixForType:(NSInteger)arg0 heroColor:(id)arg1 backgroundType:(NSInteger)arg2 ;
+(struct CAColorMatrix )_colorizedVibrancyMatrixForType:(NSInteger)arg0 heroColor:(id)arg1 backgroundType:(NSInteger)arg2 ;
+(struct CAColorMatrix )_materialBackdropColorMatrixForType:(NSInteger)arg0 heroColor:(id)arg1 backgroundType:(NSInteger)arg2 ;
+(struct CAColorMatrix )_vibrancyMatrixForType:(NSInteger)arg0 heroColor:(id)arg1 backgroundType:(NSInteger)arg2 ;
-(id)transformBackdropColor:(id)arg0 ;
-(id)transformColor:(id)arg0 withVibrantMask:(id)arg1 ;
-(id)transformVibrantColor:(id)arg0 ;
-(void)calculateValuesForConfiguration:(id)arg0 ;


@end


#endif