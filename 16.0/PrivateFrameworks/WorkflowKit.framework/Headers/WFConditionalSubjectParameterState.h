// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONDITIONALSUBJECTPARAMETERSTATE_H
#define WFCONDITIONALSUBJECTPARAMETERSTATE_H

@class NSString, NSNumber;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFConditionalSubjectParameterState : NSObject <WFParameterState>



@property (readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive; // ivar: _caseInsensitive
@property (readonly, nonatomic) NSUInteger comparableTimeUnits; // ivar: _comparableTimeUnits
@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayableTimeUnits; // ivar: _displayableTimeUnits
@property (readonly, nonatomic, getter=isEnumeration) BOOL enumeration; // ivar: _enumeration
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, nonatomic, getter=isIrrational) BOOL irrational; // ivar: _irrational
@property (readonly, nonatomic) NSNumber *maximumLength; // ivar: _maximumLength
@property (readonly, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tense; // ivar: _tense
@property (readonly, nonatomic) NSString *unitType; // ivar: _unitType


+(Class)processingValueClass;
+(id)subjectClasses;
+(id)subjectType;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHomeIdentifier:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithVariable:(id)arg0 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg0 ;
-(id)serializedRepresentation;
-(id)supportedComparisonOperators;
-(void)getContentWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(id)arg0 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif