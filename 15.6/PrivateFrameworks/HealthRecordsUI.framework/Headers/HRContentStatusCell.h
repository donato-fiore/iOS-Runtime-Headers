// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRCONTENTSTATUSCELL_H
#define HRCONTENTSTATUSCELL_H

@class UITableViewCell, UIActivityIndicatorView, UILabel;



@interface HRContentStatusCell : UITableViewCell

@property (nonatomic, readonly) UIActivityIndicatorView *spinner; // ivar: spinner
@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif