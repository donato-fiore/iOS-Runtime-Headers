// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSITPASSPRODUCTHEADERVIEW_H
#define PKTRANSITPASSPRODUCTHEADERVIEW_H

@class UITableViewHeaderFooterView, UILabel, NSString;



@interface PKTransitPassProductHeaderView : UITableViewHeaderFooterView {
    UILabel *_labelView;
}


@property (retain, nonatomic) NSString *headerLabelText; // ivar: _headerLabelText


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif