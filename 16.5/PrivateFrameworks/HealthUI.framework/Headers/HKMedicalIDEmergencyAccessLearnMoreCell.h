// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICALIDEMERGENCYACCESSLEARNMORECELL_H
#define HKMEDICALIDEMERGENCYACCESSLEARNMORECELL_H

@class UITableViewCell, UITextView, NSAttributedString;



@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell {
    UITextView *_bodyTextView;
}


@property (copy, nonatomic) NSAttributedString *body; // ivar: _body


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addSubviews;
-(void)_setUpConstraints;
-(void)_setUpViews;


@end


#endif