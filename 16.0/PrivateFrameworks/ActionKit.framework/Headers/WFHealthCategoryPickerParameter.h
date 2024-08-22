// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHCATEGORYPICKERPARAMETER_H
#define WFHEALTHCATEGORYPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, HKCategoryType;



@interface WFHealthCategoryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (retain, nonatomic) HKCategoryType *categoryType; // ivar: _categoryType


-(BOOL)isHidden;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)updatePossibleStates;


@end


#endif