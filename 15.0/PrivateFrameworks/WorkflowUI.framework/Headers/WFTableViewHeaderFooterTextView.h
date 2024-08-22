// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLEVIEWHEADERFOOTERTEXTVIEW_H
#define WFTABLEVIEWHEADERFOOTERTEXTVIEW_H

@class UITableViewHeaderFooterView, NSArray, UILabel, NSString;



@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView

@property (readonly, nonatomic) NSArray *horizontalConstraints; // ivar: _horizontalConstraints
@property (nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text;


-(id)init;
-(id)initWithReuseIdentifier:(id)arg0 ;


@end


#endif