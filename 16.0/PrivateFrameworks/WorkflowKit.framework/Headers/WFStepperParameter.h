// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSTEPPERPARAMETER_H
#define WFSTEPPERPARAMETER_H

@class NSString, NSNumber;


#import "WFParameter.h"

@interface WFStepperParameter : WFParameter

@property (readonly, copy, nonatomic) NSString *localizedLabelFormatString;
@property (readonly, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly, copy, nonatomic) NSString *pluralNoun; // ivar: _pluralNoun
@property (readonly, copy, nonatomic) NSString *singularNoun; // ivar: _singularNoun


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabel;
-(id)localizedLabelWithState:(id)arg0 includingPrefix:(BOOL)arg1 ;
-(id)localizedLabelWithoutCountAndPrefix;


@end


#endif