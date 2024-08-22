// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STTABLEVIEWHEADERFOOTERVIEW_H
#define STTABLEVIEWHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UILayoutGuide, NSArray;



@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // ivar: _contentLayoutGuide
@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // ivar: _rtlContentLayoutGuideConstraints


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 useLayoutMarginsGuide:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif