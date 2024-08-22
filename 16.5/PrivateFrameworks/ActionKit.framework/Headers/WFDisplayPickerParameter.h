// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDISPLAYPICKERPARAMETER_H
#define WFDISPLAYPICKERPARAMETER_H

@class WFDynamicEnumerationParameter, NSString, NSArray;
@protocol WFDynamicEnumerationDataSource;



@interface WFDisplayPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displays; // ivar: _displays
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 accessoryIconForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 accessoryImageForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)possibleStatesForEnumeration:(id)arg0 ;


@end


#endif