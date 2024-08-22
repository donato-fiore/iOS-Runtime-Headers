// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCLARGETAGVIEW_H
#define DOCLARGETAGVIEW_H

@class UIView, UILabel, DOCTag;


#import "DOCTagCheckmarkView.h"
#import "DOCTagDotView.h"

@interface DOCLargeTagView : UIView

@property (readonly, nonatomic) DOCTagCheckmarkView *checkmarkView; // ivar: _checkmarkView
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) DOCTagDotView *tagDotView; // ivar: _tagDotView
@property (readonly, nonatomic) UILabel *tagNameLabel; // ivar: _tagNameLabel
@property (retain, nonatomic) DOCTag *tagValue; // ivar: _tagValue


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateBackgroundColor;
-(void)updateBorder;


@end


#endif