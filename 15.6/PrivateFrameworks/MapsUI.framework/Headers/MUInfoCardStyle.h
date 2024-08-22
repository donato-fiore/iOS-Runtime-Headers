// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUINFOCARDSTYLE_H
#define MUINFOCARDSTYLE_H


#import <Foundation/Foundation.h>


@interface MUInfoCardStyle : NSObject



+(NSInteger)containerStyle;
+(NSInteger)platterStyle;
+(id)attributionTintColor;
+(id)buttonCellTextColor;
+(id)cardBackgroundColor;
+(id)imageTileBackgroundColor;
+(id)labelForProminence:(NSInteger)arg0 ;
+(id)punchoutButtonPlatterColor;
+(id)rowSelectedColor;
+(id)rowUnselectedColor;
+(id)secondaryTextColor;
+(id)textColor;
+(id)tintColor;
+(id)tokenBackgroundColor;
+(void)setInfoCardContainerStyle:(NSInteger)arg0 ;
+(void)setTintColorProvider:(id)arg0 ;


@end


#endif