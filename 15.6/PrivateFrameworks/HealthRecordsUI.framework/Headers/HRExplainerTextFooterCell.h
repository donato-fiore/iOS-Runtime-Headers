// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HREXPLAINERTEXTFOOTERCELL_H
#define HREXPLAINERTEXTFOOTERCELL_H

@class UITableViewCell, NSString;



@interface HRExplainerTextFooterCell : UITableViewCell {
    ? label;
    ? content;
}


@property (nonatomic, copy) NSString *content;


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif