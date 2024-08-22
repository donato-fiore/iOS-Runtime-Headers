// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCHECKABLETABLEVIEWCELL_H
#define TSDCHECKABLETABLEVIEWCELL_H

@class UITableViewCell, UIButton, UIImageView;



@interface TSDCheckableTableViewCell : UITableViewCell {
    UIButton *mImageButton;
    UIImageView *mCheckmarkImageView;
}


@property (nonatomic) BOOL checked; // ivar: mChecked
@property (readonly, nonatomic) BOOL showsCheckboxOnRight; // ivar: mShowsCheckboxOnRight


-(id)imageForState:(NSUInteger)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 showsCheckboxOnRight:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg0 showsCheckboxOnRight:(BOOL)arg1 style:(NSInteger)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCheckmarkImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif