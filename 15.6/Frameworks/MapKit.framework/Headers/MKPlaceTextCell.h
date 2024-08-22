// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACETEXTCELL_H
#define MKPLACETEXTCELL_H

@class NSLayoutConstraint, NSString;


#import "MKPlaceSectionRowView.h"
#import "_MKUILabel.h"

@interface MKPlaceTextCell : MKPlaceSectionRowView

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) _MKUILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;


@end


#endif