// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKBASICLOGINTABLEVIEWCELL_H
#define AKBASICLOGINTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface AKBasicLoginTableViewCell : UITableViewCell {
    UITextField *_ak_cellTextField;
}


@property (readonly, nonatomic) UITextField *ak_cellTextField;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif