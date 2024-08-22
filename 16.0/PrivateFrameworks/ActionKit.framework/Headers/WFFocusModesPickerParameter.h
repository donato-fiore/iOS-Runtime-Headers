// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOCUSMODESPICKERPARAMETER_H
#define WFFOCUSMODESPICKERPARAMETER_H

@class WFDynamicEnumerationParameter, NSString;
@protocol WFDynamicEnumerationDataSource;



@interface WFFocusModesPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)possibleStatesForEnumeration:(id)arg0 ;


@end


#endif