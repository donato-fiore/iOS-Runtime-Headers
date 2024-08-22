// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTHEMEBRUSH_H
#define GKTHEMEBRUSH_H



#import "GKBrush.h"
#import "GKUITheme.h"

@interface GKThemeBrush : GKBrush

@property (retain, nonatomic) GKUITheme *theme; // ivar: _theme


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTheme:(id)arg0 ;


@end


#endif