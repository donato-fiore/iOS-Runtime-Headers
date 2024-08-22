// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCATEGORYTITLETABLEVIEWCELL_H
#define STSCATEGORYTITLETABLEVIEWCELL_H

@class UITableViewCell, UIButton;
@protocol STSCategoryTitleTableViewCellDelegate;


#import "STSCategoryResult.h"

@interface STSCategoryTitleTableViewCell : UITableViewCell {
    UIButton *_clearButton;
}


@property (nonatomic) BOOL clearButtonHidden; // ivar: _clearButtonHidden
@property (retain, nonatomic) STSCategoryResult *result; // ivar: _result
@property (weak, nonatomic) NSObject<STSCategoryTitleTableViewCellDelegate> *selectionDelegate; // ivar: _selectionDelegate


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)clearButtonPressed:(id)arg0 ;


@end


#endif