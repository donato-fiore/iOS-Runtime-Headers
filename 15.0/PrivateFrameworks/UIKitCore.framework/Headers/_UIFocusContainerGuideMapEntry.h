// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSCONTAINERGUIDEMAPENTRY_H
#define _UIFOCUSCONTAINERGUIDEMAPENTRY_H

@class UIFocusRegionMapEntry;


#import "UIFocusContainerGuide.h"

@interface _UIFocusContainerGuideMapEntry : UIFocusRegionMapEntry

@property (nonatomic) CGFloat axisAlignedDistanceFromFocusedRect; // ivar: _axisAlignedDistanceFromFocusedRect
@property (weak, nonatomic) UIFocusContainerGuide *focusContainerGuide; // ivar: _focusContainerGuide
@property (nonatomic) CGRect focusContainmentFrame; // ivar: _focusContainmentFrame


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)visualRepresentationColor;
-(void)drawVisualRepresentationInContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 ;


@end


#endif