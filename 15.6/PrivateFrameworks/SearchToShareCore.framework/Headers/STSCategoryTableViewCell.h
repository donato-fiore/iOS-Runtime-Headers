// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCATEGORYTABLEVIEWCELL_H
#define STSCATEGORYTABLEVIEWCELL_H

@class UITableViewCell, UIView;



@interface STSCategoryTableViewCell : UITableViewCell {
    UIView *_seperator;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)showSeperator:(BOOL)arg0 ;


@end


#endif