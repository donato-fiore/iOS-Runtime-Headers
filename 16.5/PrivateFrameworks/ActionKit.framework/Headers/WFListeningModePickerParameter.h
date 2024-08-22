// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLISTENINGMODEPICKERPARAMETER_H
#define WFLISTENINGMODEPICKERPARAMETER_H

@class WFDynamicEnumerationParameter, WFAction, NSString;
@protocol WFActionEventObserver, WFDynamicEnumerationDataSource;



@interface WFListeningModePickerParameter : WFDynamicEnumerationParameter <WFActionEventObserver, WFDynamicEnumerationDataSource>



@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif