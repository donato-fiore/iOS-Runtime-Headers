// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTDETAILTWOVALUECELL_H
#define EKEVENTDETAILTWOVALUECELL_H

@class UILabel;


#import "EKEventDetailCell.h"

@interface EKEventDetailTwoValueCell : EKEventDetailCell {
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}


@property (readonly, nonatomic) unsigned int visibleItems;


-(BOOL)update;
-(CGFloat)_layoutForWidth:(CGFloat)arg0 ;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 platformStyle:(int)arg2 ;
-(id)titleView;
-(id)value2View;
-(id)valueView;
-(int)twoValueCellStyle;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutSubviews;


@end


#endif