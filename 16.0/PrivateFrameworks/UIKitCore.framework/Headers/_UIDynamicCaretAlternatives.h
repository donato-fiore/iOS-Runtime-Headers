// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDYNAMICCARETALTERNATIVES_H
#define _UIDYNAMICCARETALTERNATIVES_H

@class NSArray;


#import "UIView.h"

@interface _UIDynamicCaretAlternatives : UIView

@property (retain, nonatomic) NSArray *alternativesButtons; // ivar: _alternativesButtons
@property (retain, nonatomic) UIView *horizontalDivider; // ivar: _horizontalDivider
@property (retain, nonatomic) UIView *verticalDivider; // ivar: _verticalDivider


-(NSInteger)indexOfButtonForPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)highlightButtonAtIndex:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)setButtonLabels:(id)arg0 ;


@end


#endif