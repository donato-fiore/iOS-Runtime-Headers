// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTENTAPPPICKERPARAMETER_H
#define WFINTENTAPPPICKERPARAMETER_H

@class NSString;


#import "WFDynamicEnumerationParameter.h"

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

@property (readonly, nonatomic) NSString *intentName; // ivar: _intentName


-(BOOL)alwaysShowsButton;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;
-(void)possibleStatesDidChange;


@end


#endif