// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI19SLIDERTABLEVIEWCELL_H
#define _TTC5TEAUI19SLIDERTABLEVIEWCELL_H

@class UITableViewCell;



@interface _TtC5TeaUI19SliderTableViewCell : UITableViewCell {
    ? onChange;
    ? label;
    ? valueLabel;
    ? precision;
    ? slider;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)valueChanged;


@end


#endif