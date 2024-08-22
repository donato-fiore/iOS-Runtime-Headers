// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUILOCATIONEDITITEMCELL_H
#define EKUILOCATIONEDITITEMCELL_H

@class UITableViewCell, UILabel, UIImageView, UIActivityIndicatorView, UIButton, UIView;



@interface EKUILocationEditItemCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
    UIButton *_clearButton;
}


@property (retain, nonatomic) UIView *clearButtonView;


-(id)description;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateWithName:(id)arg0 sourceSupportsAvailability:(BOOL)arg1 availabilityRequestInProgress:(BOOL)arg2 availabilityType:(NSInteger)arg3 showClearButton:(BOOL)arg4 ;


@end


#endif