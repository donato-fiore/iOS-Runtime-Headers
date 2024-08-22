// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NTKKEYLINEPATHVIEW_H
#define _NTKKEYLINEPATHVIEW_H

@class UIBezierPath, UIColor, NSString;
@protocol NTKKeylineView;


#import "NTKColoringView.h"
#import "NTKKeylineTouchable.h"

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView>

 {
    UIBezierPath *_path;
    UIBezierPath *_secondPath;
}


@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKKeylineTouchable *touchable; // ivar: touchable
@property (nonatomic) BOOL usesLegibility;


-(id)initWithPath:(id)arg0 secondPath:(id)arg1 scale:(CGFloat)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif