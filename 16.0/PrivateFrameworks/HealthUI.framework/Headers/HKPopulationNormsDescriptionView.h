// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPOPULATIONNORMSDESCRIPTIONVIEW_H
#define HKPOPULATIONNORMSDESCRIPTIONVIEW_H

@class UIView, UILabel;



@interface HKPopulationNormsDescriptionView : UIView

@property (retain, nonatomic) UILabel *classificationDescriptionLabel; // ivar: _classificationDescriptionLabel
@property (retain, nonatomic) UILabel *classificationTitleLabel; // ivar: _classificationTitleLabel


-(id)init;
-(void)updateWithTitle:(id)arg0 description:(id)arg1 ;


@end


#endif