// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKABSTRACTREVIEWTABLEVIEWCELL_H
#define CKABSTRACTREVIEWTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString;



@interface CKAbstractReviewTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *lastModifiedLabel; // ivar: _lastModifiedLabel
@property (retain, nonatomic) NSString *mainText;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) UILabel *sizeLabel; // ivar: _sizeLabel
@property (retain, nonatomic) NSString *subheadingText;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif