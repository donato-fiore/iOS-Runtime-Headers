// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUILOCATIONEDITITEMCELL_H
#define EKUILOCATIONEDITITEMCELL_H

@class UITableViewCell, UILabel, UIImageView, UIActivityIndicatorView, UIButton;



@interface EKUILocationEditItemCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}


@property (readonly, nonatomic) UIButton *clearButton; // ivar: _clearButton


-(id)description;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateWithName:(id)arg0 sourceSupportsAvailability:(BOOL)arg1 availabilityRequestInProgress:(BOOL)arg2 availabilityType:(NSInteger)arg3 ;


@end


#endif