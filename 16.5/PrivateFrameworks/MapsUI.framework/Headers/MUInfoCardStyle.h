// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUINFOCARDSTYLE_H
#define MUINFOCARDSTYLE_H


#import <Foundation/Foundation.h>


@interface MUInfoCardStyle : NSObject



+(BOOL)hasExternallyProvidedTintColor;
+(NSInteger)containerStyle;
+(NSInteger)platterStyle;
+(id)actionRowTintColor;
+(id)attributionTintColor;
+(id)buttonCellTextColor;
+(id)cardBackgroundColor;
+(id)directionsButtonTintColor;
+(id)imageTileBackgroundColor;
+(id)labelForProminence:(NSInteger)arg0 ;
+(id)preferredVerticalCardConfiguration;
+(id)punchoutButtonPlatterColor;
+(id)resolvedPrimaryColorForProposedColor:(id)arg0 ;
+(id)rowSelectedColor;
+(id)rowUnselectedColor;
+(id)secondaryTextColor;
+(id)textColor;
+(id)tintColor;
+(id)tokenBackgroundColor;
+(id)verifiedLogoBackgroundColor;
+(void)setInfoCardContainerStyle:(NSInteger)arg0 ;
+(void)setTintColorProvider:(id)arg0 ;


@end


#endif