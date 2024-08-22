// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEDITPASSESTABLEVIEWCELL_H
#define PKEDITPASSESTABLEVIEWCELL_H

@class UITableViewCell, PKPass;



@interface PKEditPassesTableViewCell : UITableViewCell

@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (nonatomic) BOOL showImage; // ivar: _showImage


+(BOOL)needsFullPassImage;
+(CGFloat)height;
+(struct CGSize )imageSizeNeeded;
+(struct UIEdgeInsets )separatorInset;
-(id)initWithReuseIdentifier:(id)arg0 showImage:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setImage:(id)arg0 forPass:(id)arg1 ;


@end


#endif