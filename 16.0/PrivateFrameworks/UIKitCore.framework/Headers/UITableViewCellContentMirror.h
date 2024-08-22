// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWCELLCONTENTMIRROR_H
#define UITABLEVIEWCELLCONTENTMIRROR_H



#import "UIView.h"

@interface UITableViewCellContentMirror : UIView {
    BOOL _selected;
}


@property (nonatomic, getter=isSelected) BOOL selected;


-(id)cell;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif