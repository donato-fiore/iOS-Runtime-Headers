// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUTABLEARTWORKCOLORANALYSIS_H
#define MPMUTABLEARTWORKCOLORANALYSIS_H

@class UIColor;


#import "MPArtworkColorAnalysis.h"

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif