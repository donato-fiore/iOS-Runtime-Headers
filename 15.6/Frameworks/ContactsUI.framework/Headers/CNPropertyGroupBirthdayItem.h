// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYGROUPBIRTHDAYITEM_H
#define CNPROPERTYGROUPBIRTHDAYITEM_H



#import "CNPropertyGroupDateItem.h"

@interface CNPropertyGroupBirthdayItem : CNPropertyGroupDateItem



+(id)_dateForGroup:(id)arg0 ;
+(id)calendarForLabel:(id)arg0 ;
+(id)initialValueForLabel:(id)arg0 group:(id)arg1 ;
-(id)displayLabel;
-(id)labeledValueToCurateFromSuggestion;
-(void)updateLabeledValueWithLabel:(id)arg0 ;


@end


#endif