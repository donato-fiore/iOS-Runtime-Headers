// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSDASHBOARDPRIMARYMANEUVERVIEW_H
#define CPSDASHBOARDPRIMARYMANEUVERVIEW_H



#import "CPSPrimaryManeuverView.h"

@interface CPSDashboardPrimaryManeuverView : CPSPrimaryManeuverView



+(id)instructionsForManeuver:(id)arg0 ;
+(id)junctionImageForManeuver:(id)arg0 ;
+(id)symbolImageForManeuver:(id)arg0 ;
-(BOOL)centersManeuverInView;
-(BOOL)fitJunctionViewToHeight;
-(BOOL)hasJunctionImageBackground;
-(CGFloat)symbolImageHeight;
-(id)junctionBackgroundColor;


@end


#endif