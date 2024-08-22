// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATEPICKERPARAMETER_H
#define WFDATEPICKERPARAMETER_H

@class NSString, NSDate;
@protocol WFParameterDialogProvider;


#import "WFParameter.h"

@interface WFDatePickerParameter : WFParameter <WFParameterDialogProvider>



@property (nonatomic) NSInteger datePickerMode; // ivar: _datePickerMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *maximumDate; // ivar: _maximumDate
@property (retain, nonatomic) NSDate *minimumDate; // ivar: _minimumDate
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)initWithDefinition:(id)arg0 ;
-(id)parameterStateFromDialogResponse:(id)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif