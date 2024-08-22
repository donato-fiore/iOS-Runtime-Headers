// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFERRORRESULTCOMPONENT_H
#define HFERRORRESULTCOMPONENT_H

@class NSString, NSURL, HMSymptom;


#import "HFItemResultComponent.h"

@interface HFErrorResultComponent : HFItemResultComponent

@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSUInteger descriptionBadgeType; // ivar: _descriptionBadgeType
@property (copy, nonatomic) NSString *detailedErrorDescription; // ivar: _detailedErrorDescription
@property (nonatomic) NSInteger displayPriority; // ivar: _displayPriority
@property (copy, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (copy, nonatomic) NSURL *errorHandlerURL; // ivar: _errorHandlerURL
@property (copy, nonatomic) NSString *errorHandlerURLText; // ivar: _errorHandlerURLText
@property (copy, nonatomic) NSString *errorMessageButtonTitle; // ivar: _errorMessageButtonTitle
@property (copy, nonatomic) NSString *errorMessageTitle; // ivar: _errorMessageTitle
@property (retain, nonatomic) HMSymptom *underlyingSymptom; // ivar: _underlyingSymptom
@property (nonatomic) BOOL updateInProgress; // ivar: _updateInProgress


+(BOOL)_requiresManualFixOptionToDisplaySymptom:(id)arg0 ;
+(NSInteger)_displayPriorityForSymptom:(id)arg0 ;
+(NSInteger)priorityForCategory:(NSUInteger)arg0 ;
+(id)componentForAccessoryReprovisionState:(NSUInteger)arg0 ;
+(id)componentForDisplayError:(id)arg0 symptomContextProvider:(id)arg1 ;
+(id)componentForSymptom:(id)arg0 contextProvider:(id)arg1 ;
+(id)componentForUnreachableAccessoryWithContextProvider:(id)arg0 ;
+(id)componentForWriteErrorForCharacteristics:(id)arg0 valueSource:(id)arg1 ;
-(NSInteger)componentPriority;
-(id)init;
-(id)initWithCategory:(NSUInteger)arg0 ;
-(id)results;
-(void)_addAccountSymptomMessageForAccountName:(id)arg0 symptom:(id)arg1 ;


@end


#endif