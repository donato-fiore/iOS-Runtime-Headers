// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAPPPICKERPARAMETER_H
#define WFAPPPICKERPARAMETER_H

@class NSString;
@protocol WFDynamicEnumerationDataSource;


#import "WFDynamicEnumerationParameter.h"

@interface WFAppPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, nonatomic) NSInteger appSearchType; // ivar: _appSearchType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useLegacyIdentifiers; // ivar: _useLegacyIdentifiers


-(BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg0 ;
-(Class)singleStateClass;
-(id)enumeration:(id)arg0 accessoryIconForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 accessoryImageForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)stateForRecord:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif