// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBADGEDGAMEICONBRUSH_H
#define GKBADGEDGAMEICONBRUSH_H



#import "GKThemeBrush.h"

@interface GKBadgedGameIconBrush : GKThemeBrush

@property (retain, nonatomic) GKThemeBrush *badgeBrush; // ivar: _badgeBrush


-(CGFloat)scaleForInput:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;


@end


#endif