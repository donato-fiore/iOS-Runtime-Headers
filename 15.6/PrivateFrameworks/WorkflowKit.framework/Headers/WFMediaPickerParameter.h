// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMEDIAPICKERPARAMETER_H
#define WFMEDIAPICKERPARAMETER_H



#import "WFParameter.h"
#import "WFAction.h"

@interface WFMediaPickerParameter : WFParameter

@property (weak, nonatomic) WFAction *action; // ivar: _action


-(BOOL)parameterStateIsValid:(id)arg0 ;
-(Class)singleStateClass;
-(id)localizedLabelForState:(id)arg0 ;


@end


#endif