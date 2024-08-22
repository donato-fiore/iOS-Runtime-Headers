// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBRUSHLIST_H
#define GKBRUSHLIST_H

@class NSArray;


#import "GKThemeBrush.h"

@interface GKBrushList : GKThemeBrush

@property (retain, nonatomic) NSArray *brushList; // ivar: _brushList


+(id)brushListWithBrushes:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGRect )drawRectForBrushAtIndex:(NSUInteger)arg0 fromRect:(struct CGRect )arg1 input:(id)arg2 ;
-(void)didDrawRect:(struct CGRect )arg0 withBrushAtIndex:(NSUInteger)arg1 input:(id)arg2 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;
-(void)willDrawRect:(struct CGRect )arg0 withBrushAtIndex:(NSUInteger)arg1 input:(id)arg2 ;


@end


#endif