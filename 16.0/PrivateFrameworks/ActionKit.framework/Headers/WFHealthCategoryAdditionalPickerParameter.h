// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHCATEGORYADDITIONALPICKERPARAMETER_H
#define WFHEALTHCATEGORYADDITIONALPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, HKCategoryType;



@interface WFHealthCategoryAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (retain, nonatomic) HKCategoryType *categoryType; // ivar: _categoryType


-(BOOL)isHidden;
-(id)localizedLabel;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)updatePossibleStates;


@end


#endif