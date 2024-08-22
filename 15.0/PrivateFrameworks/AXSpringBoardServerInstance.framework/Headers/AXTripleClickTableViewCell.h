// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXTRIPLECLICKTABLEVIEWCELL_H
#define AXTRIPLECLICKTABLEVIEWCELL_H

@class UITableViewCell, UIView;



@interface AXTripleClickTableViewCell : UITableViewCell {
    UIView *_topLine;
    UIView *_bottomLine;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif