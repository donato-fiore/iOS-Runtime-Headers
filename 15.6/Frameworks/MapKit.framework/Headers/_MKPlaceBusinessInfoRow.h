// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKPLACEBUSINESSINFOROW_H
#define _MKPLACEBUSINESSINFOROW_H

@class NSMutableArray, NSArray, UILayoutGuide;


#import "MKPlaceSectionRowView.h"

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {
    BOOL _needToRecalculateWidth;
    NSUInteger _numberOfColumns;
    NSMutableArray *_labels;
    NSArray *_constraints;
    UILayoutGuide *_leftColumnGuide;
    UILayoutGuide *_rightColumnGuide;
    CGFloat _width;
}


@property (retain, nonatomic) NSArray *items; // ivar: _items


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_createConstraints;
-(void)_updateFontAndTextColor:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;


@end


#endif