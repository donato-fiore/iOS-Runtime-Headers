// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSCELL_H
#define CKDETAILSCELL_H

@class UITableViewCell, UIView;



@interface CKDetailsCell : UITableViewCell

@property (retain, nonatomic) UIView *bottomSeperator; // ivar: _bottomSeperator
@property (nonatomic) BOOL indentBottomSeperator; // ivar: _indentBottomSeperator
@property (nonatomic) BOOL indentTopSeperator; // ivar: _indentTopSeperator
@property (retain, nonatomic) UIView *topSeperator; // ivar: _topSeperator


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif