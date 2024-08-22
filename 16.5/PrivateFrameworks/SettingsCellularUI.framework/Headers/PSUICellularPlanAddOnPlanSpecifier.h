// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARPLANADDONPLANSPECIFIER_H
#define PSUICELLULARPLANADDONPLANSPECIFIER_H

@class PSSpecifier, CTDisplayPlan, UILabel, UIButton;



@interface PSUICellularPlanAddOnPlanSpecifier : PSSpecifier {
    id *_target;
    CTDisplayPlan *_displayPlan;
    UILabel *_nameLabel;
    UILabel *_numberLabel;
}


@property (readonly, nonatomic) UIButton *addButton; // ivar: _addButton


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 displayPlan:(id)arg2 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif