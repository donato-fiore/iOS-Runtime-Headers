// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTIMEZONEPICKERPARAMETER_H
#define WFTIMEZONEPICKERPARAMETER_H

@class NSArray, ALCityManager, NSString;
@protocol WFDynamicEnumerationDataSource, OS_dispatch_queue;


#import "WFDynamicEnumerationParameter.h"

@interface WFTimeZonePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (retain, nonatomic) NSArray *calendarStates; // ivar: _calendarStates
@property (retain, nonatomic) ALCityManager *cityManager; // ivar: _cityManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif