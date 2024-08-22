// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVPNPICKERPARAMETER_H
#define WFVPNPICKERPARAMETER_H

@class WFDynamicEnumerationParameter, NSString;
@protocol WFDynamicEnumerationDataSource;



@interface WFVPNPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerationAllowsMultipleValues:(id)arg0 ;
-(Class)singleStateClass;
-(id)accessoryIconForPossibleState:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif