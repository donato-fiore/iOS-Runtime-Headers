// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKEMERGENCYCARDNONECELL_H
#define HKEMERGENCYCARDNONECELL_H

@class UITableViewCell, UILabel;



@interface HKEmergencyCardNoneCell : UITableViewCell {
    UILabel *_noneLabel;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setUpConstraints;
-(void)setUpViews;


@end


#endif