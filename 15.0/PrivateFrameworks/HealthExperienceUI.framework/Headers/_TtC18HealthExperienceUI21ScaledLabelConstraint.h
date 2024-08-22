// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI21SCALEDLABELCONSTRAINT_H
#define _TTC18HEALTHEXPERIENCEUI21SCALEDLABELCONSTRAINT_H

@class NSLayoutConstraint, UILabel;



@interface _TtC18HealthExperienceUI21ScaledLabelConstraint : NSLayoutConstraint {
    ? rawConstant;
}


@property (nonatomic, weak) UILabel *referenceLabel; // ivar: referenceLabel


-(id)init;
-(void)awakeFromNib;
-(void)textSizeChanged;


@end


#endif