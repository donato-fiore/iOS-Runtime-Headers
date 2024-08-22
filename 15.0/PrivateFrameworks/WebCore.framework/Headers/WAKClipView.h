// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WAKCLIPVIEW_H
#define WAKCLIPVIEW_H



#import "WAKView.h"

@interface WAKClipView : WAKView

@property (nonatomic) BOOL copiesOnScroll; // ivar: _copiesOnScroll
@property (readonly, nonatomic) WAKView *documentView; // ivar: _documentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )documentVisibleRect;
-(void)dealloc;


@end


#endif