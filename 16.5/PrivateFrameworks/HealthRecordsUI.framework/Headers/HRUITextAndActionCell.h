// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRUITEXTANDACTIONCELL_H
#define HRUITEXTANDACTIONCELL_H

@class UITableViewCell, UIButton, NSString;



@interface HRUITextAndActionCell : UITableViewCell {
    ? explanationLabel;
    ? explanation;
    ? actionTitle;
}


@property (nonatomic, readonly) UIButton *actionButton; // ivar: actionButton
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *explanation;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif