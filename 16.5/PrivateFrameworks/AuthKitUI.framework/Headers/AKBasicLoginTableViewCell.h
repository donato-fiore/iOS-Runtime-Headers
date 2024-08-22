// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBASICLOGINTABLEVIEWCELL_H
#define AKBASICLOGINTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface AKBasicLoginTableViewCell : UITableViewCell {
    UITextField *_cellTextField;
}


@property (readonly, nonatomic) UITextField *cellTextField;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif