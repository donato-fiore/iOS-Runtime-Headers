// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATEFIELDPARAMETER_H
#define WFDATEFIELDPARAMETER_H

@class NSString, NSDateFormatter;
@protocol WFParameterDialogProvider;


#import "WFTextInputParameter.h"

@interface WFDateFieldParameter : WFTextInputParameter <WFParameterDialogProvider>



@property (readonly, nonatomic) BOOL dateOnlyMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL detectsAllDayDates; // ivar: _detectsAllDayDates
@property (readonly, nonatomic) BOOL displaysAllDayString; // ivar: _displaysAllDayString
@property (nonatomic) BOOL forcesAllDayDates; // ivar: _forcesAllDayDates
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateFormatter *hintDateFormatter; // ivar: _hintDateFormatter
@property (readonly, nonatomic) NSString *hintDateMode; // ivar: _hintDateMode
@property (readonly, nonatomic) NSString *localizedIncompleteHintString;
@property (readonly, nonatomic) NSString *reactiveParameterKey; // ivar: _reactiveParameterKey
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL timeOnlyMode;


-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg0 ;
-(id)dateFormatterForConfiguration:(id)arg0 ;
-(id)datePickerConfiguration;
-(id)hintForState:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)parameterStateFromDialogResponse:(id)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif