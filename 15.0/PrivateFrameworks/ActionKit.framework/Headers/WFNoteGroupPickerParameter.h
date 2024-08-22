// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNOTEGROUPPICKERPARAMETER_H
#define WFNOTEGROUPPICKERPARAMETER_H

@class WFDynamicEnumerationParameter, NSString;
@protocol WFDynamicEnumerationDataSource;



@interface WFNoteGroupPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif