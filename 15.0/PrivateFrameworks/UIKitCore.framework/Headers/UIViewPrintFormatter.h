// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWPRINTFORMATTER_H
#define UIVIEWPRINTFORMATTER_H



#import "UIPrintFormatter.h"
#import "UIView.h"

@interface UIViewPrintFormatter : UIPrintFormatter

@property (readonly, nonatomic) UIView *view; // ivar: _view


-(NSInteger)_recalcPageCount;
-(id)_initWithView:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;


@end


#endif